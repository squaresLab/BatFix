int moduloMultiplication ( int a , int b , int mod ) {
  int res = 0 ;
  ;
  a = a % mod ;
  while ( ( b ) ) {
    if ( ( b & 1 ) ) res = ( res + a ) % mod ;
    a = ( 2 * a ) % mod ;
    b >>= 1 ;
  }
  return res ;
}
