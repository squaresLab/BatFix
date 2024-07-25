int countPaths ( int n , int m ) {
  if ( n == 0 || m == 0 ) return 1 ;
  return ( countPaths ( n - 1 , m ) + countPaths ( n , m - 1 ) ) ;
}
