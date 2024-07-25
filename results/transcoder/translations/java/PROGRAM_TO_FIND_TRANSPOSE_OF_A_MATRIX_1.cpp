void transpose ( int A [ N ] [ M ] , int B [ M ] [ N ] ) {
  int i , j ;
  for ( i = 0 ;
  i < N ;
  i ++ ) for ( j = 0 ;
  j < M ;
  j ++ ) B [ i ] [ j ] = A [ j ] [ i ] ;
}
