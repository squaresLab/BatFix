int maxProd ( int n ) {
  if ( n == 2 || n == 3 ) return ( n - 1 ) ;
  int res = 1 ;
  while ( n > 4 ) {
    n -= 3 ;
    res *= 3 ;
  }
  return ( n * res ) ;
}
