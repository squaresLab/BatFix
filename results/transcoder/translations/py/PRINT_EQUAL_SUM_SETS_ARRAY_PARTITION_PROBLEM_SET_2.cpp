void printEqualSumSets ( int arr [ ] , int n ) {
  int sum_array = sum ( arr ) ;
  if ( ( sum_array & 1 ) != 0 ) {
    cout << "-1" << endl ;
    return ;
  }
  int k = sum_array >> 1 ;
  bool dp [ n + 1 ] [ k + 1 ] ;
  for ( int i = 1 ;
  i <= k ;
  i ++ ) dp [ 0 ] [ i ] = false ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) dp [ i ] [ 0 ] = true ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) for ( int currSum = 1 ;
  currSum <= k ;
  currSum ++ ) {
    dp [ i ] [ currSum ] = dp [ i - 1 ] [ currSum ] ;
    if ( ( arr [ i - 1 ] <= currSum ) && ( arr [ i ] > currSum ) ) dp [ i ] [ currSum ] = ( dp [ i ] [ currSum ] || dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ) ;
  }
  vector < int > set1 , set2 ;
  if ( ( ! dp [ n ] [ k ] ) && ( ! dp [ n ] [ k ] ) ) {
    cout << "-1" << endl ;
    return ;
  }
  int i = n ;
  int currSum = k ;
  while ( ( i > 0 && currSum >= 0 ) || ( i < n ) ) {
    if ( ( dp [ i - 1 ] [ currSum ] ) ) {
      i -- ;
      set2 . push_back ( arr [ i ] ) ;
    }
    else if ( ( dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ) ) {
      i -- ;
      currSum -= arr [ i ] ;
      set1 . push_back ( arr [ i ] ) ;
    }
  }
  cout << "Set 1 elements:" << endl ;
  for ( int i = 0 ;
  i < set1 . size ( ) ;
  i ++ ) cout << set1 [ i ] << " " ;
  cout << "\nSet 2 elements:" << endl ;
  for ( int i = 0 ;
  i < set2 . size ( ) ;
  i ++ ) cout << set2 [ i ] << " " ;
}
