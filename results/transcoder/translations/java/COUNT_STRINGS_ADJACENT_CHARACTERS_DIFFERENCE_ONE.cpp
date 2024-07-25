long long countStrs ( int n ) {
  vector < vector < long long >> dp ( n + 1 , vector < long long > ( 27 , 0 ) ) ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < 27 ;
    j ++ ) dp [ i ] [ j ] = 0 ;
  }
  for ( int i = 0 ;
  i <= 25 ;
  i ++ ) dp [ 1 ] [ i ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= 25 ;
    j ++ ) {
      if ( j == 0 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ] ;
      else dp [ i ] [ j ] = ( dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] ) ;
    }
  }
  long long sum = 0 ;
  for ( int i = 0 ;
  i <= 25 ;
  i ++ ) sum = ( sum + dp [ n ] [ i ] ) ;
  return sum ;
}
