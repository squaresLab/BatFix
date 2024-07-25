bool negCyclefloydWarshall ( vector < vector < int >> & graph ) {
  vector < vector < int >> dist ( V + 1 , vector < int > ( V + 1 ) ) ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) {
    for ( int j = 0 ;
    j < V ;
    j ++ ) {
      dist [ i ] [ j ] = graph [ i ] [ j ] ;
    }
  }
  for ( int k = 0 ;
  k < V ;
  k ++ ) {
    for ( int i = 0 ;
    i < V ;
    i ++ ) {
      for ( int j = 0 ;
      j < V ;
      j ++ ) {
        if ( ( dist [ i ] [ k ] + dist [ k ] [ j ] < dist [ i ] [ j ] ) && ( dist [ i ] [ j ] < 0 ) ) {
          dist [ i ] [ j ] = dist [ i ] [ k ] + dist [ k ] [ j ] ;
        }
      }
    }
  }
  for ( int i = 0 ;
  i < V ;
  i ++ ) {
    if ( ( dist [ i ] [ i ] < 0 ) && ( dist [ i ] [ i ] < V ) ) {
      return true ;
    }
  }
  return false ;
}
