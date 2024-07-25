int maxLen ( int arr [ ] , int n ) {
  unordered_map < int , int > hash_map ;
  int currSum = 0 ;
  int maxLen = 0 ;
  int endingIndex = - 1 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] == 0 ) && ( arr [ i ] != - 1 ) ) {
      arr [ i ] = - 1 ;
    }
    else {
      arr [ i ] = 1 ;
    }
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    currSum = currSum + arr [ i ] ;
    if ( ( currSum == 0 ) && ( i != 0 ) ) {
      maxLen = i + 1 ;
      endingIndex = i ;
    }
    if ( ( currSum + n ) < hash_map . size ( ) ) {
      maxLen = max ( maxLen , i - hash_map [ currSum + n ] ) ;
    }
    else {
      hash_map [ currSum ] = i ;
    }
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] == - 1 ) && ( arr [ i ] != 0 ) ) {
      arr [ i ] = 0 ;
    }
    else {
      arr [ i ] = 1 ;
    }
  }
  cout << endingIndex - maxLen + 1 << " " ;
  cout << "to" << " " ;
  cout << endingIndex << endl ;
  return maxLen ;
}
