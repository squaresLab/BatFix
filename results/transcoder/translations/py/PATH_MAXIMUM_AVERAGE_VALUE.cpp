public : int maxAverageOfPath ( vector < vector < int >> & cost , int N ) {
  vector < vector < int >> dp ( N + 1 , vector < int > ( N + 1 , 0 ) ) ;
  dp [ 0 ] [ 0 ] = cost [ 0 ] [ 0 ] ;
  for ( int i = 1 ;
  i < N ;
  i ++ ) {
    dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ] + cost [ i ] [ 0 ] ;
  }
  for ( int j = 1 ;
  j < N ;
  j ++ ) {
    dp [ 0 ] [ j ] = dp [ 0 ] [ j - 1 ] + cost [ 0 ] [ j ] ;
  }
  for ( int i = 1 ;
  i < N ;
  i ++ ) {
    for ( int j = 1 ;
    j < N ;
    j ++ ) {
      dp [ i ] [ j ] = max ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) + cost [ i ] [ j ] ;
    }
  }
  return dp [ N - 1 ] [ N - 1 ] / ( 2 * N - 1 ) ;
}
