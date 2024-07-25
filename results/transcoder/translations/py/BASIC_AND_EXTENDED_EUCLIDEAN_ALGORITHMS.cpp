template < typename T > T gcd ( T a , T b ) {
  if ( a == 0 ) return b ;
  return gcd ( b % a , a ) ;
}
