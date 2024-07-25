int countarray ( int n , int k , int x ) {
  vector < int > dp ;
  dp . push_back ( 0 ) ;
  dp . push_back ( 1 ) ;
  int i = 2 ;
  while ( i < n ) {
    dp . push_back ( ( k - 2 ) * dp [ i - 1 ] + ( k - 1 ) * dp [ i - 2 ] ) ;
    i = i + 1 ;
  }
  return ( ( k - 1 ) * dp [ n - 2 ] == x ? 1 : dp [ n - 1 ] ) ;
}
