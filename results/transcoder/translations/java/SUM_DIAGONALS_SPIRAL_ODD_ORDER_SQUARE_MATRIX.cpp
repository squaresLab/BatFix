int spiralDiaSum ( int n ) {
  if ( n == 1 ) return 1 ;
  return ( 4 * n * n - 6 * n + 6 + spiralDiaSum ( n - 2 ) ) ;
}
