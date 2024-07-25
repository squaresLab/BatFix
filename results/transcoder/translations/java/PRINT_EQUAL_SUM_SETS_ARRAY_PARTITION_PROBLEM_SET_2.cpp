void printEqualSumSets ( vector < int > arr , int n ) {
  int i , currSum , sum = 0 ;
  for ( i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    sum += arr [ i ] ;
  }
  if ( ( sum & 1 ) == 1 ) {
    cout << "-1" << endl ;
    return ;
  }
  int k = sum >> 1 ;
  vector < vector < bool >> dp ( n + 1 , vector < bool > ( k + 1 ) ) ;
  for ( i = 1 ;
  i <= k ;
  i ++ ) {
    dp [ 0 ] [ i ] = false ;
  }
  for ( i = 0 ;
  i <= n ;
  i ++ ) {
    dp [ i ] [ 0 ] = true ;
  }
  for ( i = 1 ;
  i <= n ;
  i ++ ) {
    for ( currSum = 1 ;
    currSum <= k ;
    currSum ++ ) {
      dp [ i ] [ currSum ] = dp [ i - 1 ] [ currSum ] ;
      if ( arr [ i - 1 ] <= currSum ) {
        dp [ i ] [ currSum ] = dp [ i ] [ currSum ] | dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ;
      }
    }
  }
  vector < int > set1 ;
  vector < int > set2 ;
  if ( ! dp [ n ] [ k ] ) {
    cout << "-1\n" ;
    return ;
  }
  i = n ;
  currSum = k ;
  while ( i > 0 && currSum >= 0 ) {
    if ( dp [ i - 1 ] [ currSum ] ) {
      i -- ;
      set2 . push_back ( arr [ i ] ) ;
    }
    else if ( dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ) {
      i -- ;
      currSum -= arr [ i ] ;
      set1 . push_back ( arr [ i ] ) ;
    }
  }
  cout << "Set 1 elements: " ;
  for ( i = 0 ;
  i < set1 . size ( ) ;
  i ++ ) {
    cout << set1 [ i ] << " " ;
  }
  cout << "\nSet 2 elements: " ;
  for ( i = 0 ;
  i < set2 . size ( ) ;
  i ++ ) {
    cout << set2 [ i ] << " " ;
  }
}
