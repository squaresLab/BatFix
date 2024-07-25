void constructArr ( int arr [ ] , int pair [ ] , int n ) {
  arr [ 0 ] = ( pair [ 0 ] + pair [ 1 ] - pair [ n - 1 ] ) / 2 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    arr [ i ] = pair [ i - 1 ] - arr [ 0 ] ;
  }
}
