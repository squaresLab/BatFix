long long mulmod ( long long a , long long b , long long mod ) {
  long long res = 0 ;
  a = a % mod ;
  while ( b ) {
    if ( b % 2 == 1 ) res = ( res + a ) % mod ;
    a = ( a * 2 ) % mod ;
    b /= 2 ;
  }
  return res % mod ;
}
