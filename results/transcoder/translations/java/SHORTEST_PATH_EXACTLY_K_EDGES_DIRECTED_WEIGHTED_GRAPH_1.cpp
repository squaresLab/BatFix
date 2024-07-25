int shortestPath ( int graph [ V ] [ V ] , int u , int v , int k ) {
  int sp [ V ] [ V ] [ k + 1 ] ;
  for ( int e = 0 ;
  e <= k ;
  e ++ ) {
    for ( int i = 0 ;
    i < V ;
    i ++ ) {
      for ( int j = 0 ;
      j < V ;
      j ++ ) {
        sp [ i ] [ j ] [ e ] = INF ;
        if ( e == 0 && i == j ) {
          sp [ i ] [ j ] [ e ] = 0 ;
        }
        if ( e == 1 && graph [ i ] [ j ] != INF ) {
          sp [ i ] [ j ] [ e ] = graph [ i ] [ j ] ;
        }
        if ( e > 1 ) {
          for ( int a = 0 ;
          a < V ;
          a ++ ) {
            if ( graph [ i ] [ a ] != INF && i != a && j != a && sp [ a ] [ j ] [ e - 1 ] != INF ) {
              sp [ i ] [ j ] [ e ] = min ( sp [ i ] [ j ] [ e ] , graph [ i ] [ a ] + sp [ a ] [ j ] [ e - 1 ] ) ;
            }
          }
        }
      }
    }
  }
  return sp [ u ] [ v ] [ k ] ;
}
