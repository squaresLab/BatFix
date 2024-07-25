int turnOffK ( int n , int k ) {
  if ( k <= 0 ) return n ;
  return ( n & ~ ( 1 << ( k - 1 ) ) ) ;
}
