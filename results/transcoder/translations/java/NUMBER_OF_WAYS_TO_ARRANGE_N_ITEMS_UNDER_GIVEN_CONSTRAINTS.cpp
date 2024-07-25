int waysToArrange ( int N , int K , vector < vector < int >> k ) {
  vector < vector < int >> C ( N + 1 , vector < int > ( N + 1 , 0 ) ) ;
  int i , j ;
  for ( i = 0 ;
  i <= N ;
  i ++ ) {
    for ( j = 0 ;
    j <= i ;
    j ++ ) {
      if ( j == 0 || j == i ) C [ i ] [ j ] = 1 ;
      else C [ i ] [ j ] = ( C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ) ;
    }
  }
  vector < int > dp ( K + 1 , 0 ) ;
  int count = 0 ;
  dp [ 0 ] = 1 ;
  for ( i = 0 ;
  i < K ;
  i ++ ) {
    dp [ i + 1 ] = ( dp [ i ] * C [ count + k [ i ] - 1 ] [ k [ i ] - 1 ] ) ;
    count += k [ i ] ;
  }
  return dp [ K ] ;
}
