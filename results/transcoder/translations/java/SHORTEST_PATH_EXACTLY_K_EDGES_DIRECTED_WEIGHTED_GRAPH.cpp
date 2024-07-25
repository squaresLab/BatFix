int shortestPath ( int graph [ V ] [ V ] , int u , int v , int k ) {
  if ( k == 0 && u == v ) return 0 ;
  if ( k == 1 && graph [ u ] [ v ] != INF ) return graph [ u ] [ v ] ;
  if ( k <= 0 ) return INF ;
  int res = INF ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) {
    if ( graph [ u ] [ i ] != INF && u != i && v != i ) {
      int rec_res = shortestPath ( graph , i , v , k - 1 ) ;
      if ( rec_res != INF ) {
        res = min ( res , graph [ u ] [ i ] + rec_res ) ;
      }
    }
  }
  return res ;
}
