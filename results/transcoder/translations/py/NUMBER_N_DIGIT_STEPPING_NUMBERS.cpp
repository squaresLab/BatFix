public : int answer ( int n ) {
  vector < vector < int >> dp ( 10 , vector < int > ( 10 , 0 ) ) ;
  for ( int y = 0 ;
  y < n + 1 ;
  y ++ ) {
    dp [ y ] . push_back ( 0 ) ;
  }
  ;
  if ( ( n == 1 ) && ( n == 10 ) ) return 10 ;
  ;
  for ( int j = 0 ;
  j < 10 ;
  j ++ ) dp [ 1 ] [ j ] = 1 ;
  ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j < 10 ;
    j ++ ) {
      if ( ( j == 0 ) || ( j == 9 ) ) dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ] ;
      else if ( ( j == 9 ) || ( j == 10 ) ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = ( dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] ) ;
      ;
    }
    ;
  }
  ;
  int sum = 0 ;
  ;
  for ( int j = 1 ;
  j <= 10 ;
  j ++ ) sum = sum + dp [ n ] [ j ] ;
  ;
  return sum ;
}
