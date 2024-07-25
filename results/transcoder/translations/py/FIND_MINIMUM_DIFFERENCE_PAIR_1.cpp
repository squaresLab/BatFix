int findMinDiff ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int diff = 10 * * 20 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    if ( arr [ i + 1 ] - arr [ i ] < diff ) diff = arr [ i + 1 ] - arr [ i ] ;
  }
  return diff ;
}
