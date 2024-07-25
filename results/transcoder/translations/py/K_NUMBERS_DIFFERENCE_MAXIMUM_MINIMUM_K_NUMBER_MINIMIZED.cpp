int minDiff ( int arr [ ] , int n , int k ) {
  int result = + 2147483647 ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i < n - k + 1 ;
  i ++ ) {
    result = ( int ) min ( result , arr [ i + k - 1 ] - arr [ i ] ) ;
  }
  return result ;
}
