void transpose ( int A [ N ] [ N ] ) {
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = i + 1 ;
  j < N ;
  j ++ ) {
    int temp = A [ i ] [ j ] ;
    A [ i ] [ j ] = A [ j ] [ i ] ;
    A [ j ] [ i ] = temp ;
  }
}
