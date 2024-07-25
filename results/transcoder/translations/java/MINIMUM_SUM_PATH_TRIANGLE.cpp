int minSumPath ( ) {
  vector < int > memo ( A . size ( ) ) ;
  int n = A . size ( ) - 1 ;
  for ( int i = 0 ;
  i < A [ n ] . size ( ) ;
  i ++ ) {
    memo [ i ] = A [ n ] [ i ] ;
  }
  for ( int i = A . size ( ) - 2 ;
  i >= 0 ;
  i -- ) for ( int j = 0 ;
  j < A [ i ] . size ( ) ;
  j ++ ) {
    memo [ j ] = A [ i ] [ j ] + ( int ) min ( memo [ j ] , memo [ j + 1 ] ) ;
  }
  return memo [ 0 ] ;
}
