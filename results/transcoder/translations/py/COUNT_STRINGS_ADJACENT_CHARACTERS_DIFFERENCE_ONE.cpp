public : int countStrs ( int n ) {
  vector < vector < int >> dp ( 27 ) ;
  for ( int j = 0 ;
  j < n + 1 ;
  j ++ ) dp [ 1 ] [ j ] = 0 ;
  for ( int i = 0 ;
  i <= 26 ;
  i ++ ) dp [ 1 ] [ i ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= 26 ;
    j ++ ) {
      if ( ( j == 0 ) || ( j == 1 ) ) dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ] ;
      ;
      else dp [ i ] [ j ] = ( dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] ) ;
    }
  }
  int sum = 0 ;
  for ( int i = 0 ;
  i <= 26 ;
  i ++ ) sum = sum + dp [ n ] [ i ] ;
  return sum ;
}
