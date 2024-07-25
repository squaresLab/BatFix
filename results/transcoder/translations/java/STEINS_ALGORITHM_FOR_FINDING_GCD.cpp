int gcd ( int a , int b ) {
  if ( a == 0 ) return b ;
  if ( b == 0 ) return a ;
  int k ;
  for ( k = 0 ;
  ( ( a | b ) & 1 ) == 0 ;
  ++ k ) {
    a >>= 1 ;
    b >>= 1 ;
  }
  while ( ( a & 1 ) == 0 ) a >>= 1 ;
  do {
    while ( ( b & 1 ) == 0 ) b >>= 1 ;
    if ( a > b ) {
      int temp = a ;
      a = b ;
      b = temp ;
    }
    b = ( b - a ) ;
  }
  while ( b != 0 ) ;
  return a << k ;
}
