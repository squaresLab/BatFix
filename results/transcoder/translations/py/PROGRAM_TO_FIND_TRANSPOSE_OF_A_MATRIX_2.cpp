void transpose ( int A [ N ] [ N ] ) {
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = i + 1 ;
  j < N ;
  j ++ ) A [ i ] [ j ] = A [ j ] [ i ] ;
}
