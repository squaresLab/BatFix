void multiply ( int A [ N ] [ N ] , int B [ N ] [ N ] , int C [ N ] [ N ] ) {
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = 0 ;
  j < N ;
  j ++ ) C [ i ] [ j ] = A [ i ] [ j ] - B [ i ] [ j ] ;
}
