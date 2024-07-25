int turnOffK ( int n , int k ) {
  if ( ( k <= 0 ) || ( k > n ) ) return n ;
  return ( n & ~ ( 1 << ( k - 1 ) ) ) ;
}
