void transpose ( int A [ N ] [ N ] , int B [ N ] [ N ] ) {
  int i , j ;
  for ( i = 0 ;
  i < N ;
  i ++ ) for ( j = 0 ;
  j < N ;
  j ++ ) B [ i ] [ j ] = A [ j ] [ i ] ;
}
