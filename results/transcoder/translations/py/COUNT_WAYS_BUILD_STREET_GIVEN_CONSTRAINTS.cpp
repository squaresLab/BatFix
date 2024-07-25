public : int countWays ( int n ) {
  vector < vector < int >> dp ( 2 , vector < int > ( n + 1 , 0 ) ) ;
  dp [ 0 ] [ 1 ] = 1 ;
  dp [ 1 ] [ 1 ] = 2 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    dp [ 0 ] [ i ] = dp [ 0 ] [ i - 1 ] + dp [ 1 ] [ i - 1 ] ;
    dp [ 1 ] [ i ] = ( dp [ 0 ] [ i - 1 ] * 2 + dp [ 1 ] [ i - 1 ] ) ;
  }
  return dp [ 0 ] [ n ] + dp [ 1 ] [ n ] ;
}
