int nswp ( int n ) {
  if ( n == 0 || n == 1 ) return 1 ;
  return 2 * nswp ( n - 1 ) + nswp ( n - 2 ) ;
}
