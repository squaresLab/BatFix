void multiply ( int A [ N ] [ N ] , int B [ N ] [ N ] , int C [ N ] [ N ] ) {
  int i , j ;
  for ( i = 0 ;
  i < N ;
  i ++ ) for ( j = 0 ;
  j < N ;
  j ++ ) C [ i ] [ j ] = A [ i ] [ j ] - B [ i ] [ j ] ;
}
