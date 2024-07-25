int shortestDist ( vector < vector < int >> & graph ) {
  static int INF = 0 ;
  vector < int > dist ( N , 0 ) ;
  dist [ N - 1 ] = 0 ;
  for ( int i = N - 2 ;
  i >= 0 ;
  i -- ) {
    dist [ i ] = INF ;
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      if ( graph [ i ] [ j ] == INF ) continue ;
      dist [ i ] = min ( dist [ i ] , graph [ i ] [ j ] + dist [ j ] ) ;
    }
  }
  return dist [ 0 ] ;
}
