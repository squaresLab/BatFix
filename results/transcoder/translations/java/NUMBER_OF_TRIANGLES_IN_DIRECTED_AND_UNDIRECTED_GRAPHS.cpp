int countTriangle ( int graph [ V ] [ V ] , bool isDirected ) {
  int count_Triangle = 0 ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) {
    for ( int j = 0 ;
    j < V ;
    j ++ ) {
      for ( int k = 0 ;
      k < V ;
      k ++ ) {
        if ( graph [ i ] [ j ] == 1 && graph [ j ] [ k ] == 1 && graph [ k ] [ i ] == 1 ) {
          count_Triangle ++ ;
        }
      }
    }
  }
  if ( isDirected == true ) count_Triangle /= 3 ;
  else count_Triangle /= 6 ;
  return count_Triangle ;
}
