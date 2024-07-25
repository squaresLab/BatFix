int find ( int n , int k ) {
  if ( n + 1 >= k ) return ( k - 1 ) ;
  else return ( 2 * n + 1 - k ) ;
}
