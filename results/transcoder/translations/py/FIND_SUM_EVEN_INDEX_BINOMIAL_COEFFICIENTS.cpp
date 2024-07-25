public : int evenSum ( int n ) {
  vector < vector < int >> C ( n + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= min ( i , n + 1 ) ;
    j ++ ) {
      if ( j == 0 || j == i ) C [ i ] [ j ] = 1 ;
      else C [ i ] [ j ] = C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ;
    }
  }
  int sum = 0 ;
  ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( n % 2 == 0 ) sum = sum + C [ n ] [ i ] ;
  }
  return sum ;
}
