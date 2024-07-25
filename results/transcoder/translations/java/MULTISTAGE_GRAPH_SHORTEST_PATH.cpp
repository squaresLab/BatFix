public : int shortestDist ( vector < vector < int >> & graph ) {
  vector < int > dist ( N ) ;
  dist [ N - 1 ] = 0 ;
  for ( int i = N - 2 ;
  i >= 0 ;
  i -- ) {
    dist [ i ] = INF ;
    for ( int j = i ;
    j < N ;
    j ++ ) {
      if ( graph [ i ] [ j ] == INF ) continue ;
      dist [ i ] = min ( dist [ i ] , graph [ i ] [ j ] + dist [ j ] ) ;
    }
  }
  return dist [ 0 ] ;
}
