int countTriangle ( vector < vector < int >> & g , bool isDirected ) {
  int nodes = g . size ( ) ;
  int count_Triangle = 0 ;
  for ( int i = 0 ;
  i < nodes ;
  i ++ ) {
    for ( int j = 0 ;
    j < nodes ;
    j ++ ) {
      for ( int k = 0 ;
      k < nodes ;
      k ++ ) {
        if ( ( i != j && i != k && j != k && g [ i ] [ j ] && g [ j ] [ k ] && g [ k ] [ i ] ) ) {
          count_Triangle ++ ;
        }
      }
    }
  }
  return count_Triangle / 3 ? count_Triangle / 6 : 0 ;
}
