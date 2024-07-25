int countP ( int n , int k ) {
  if ( n == 0 || k == 0 || k > n ) return 0 ;
  if ( k == 1 || k == n ) return 1 ;
  return ( k * countP ( n - 1 , k ) + countP ( n - 1 , k - 1 ) ) ;
}
