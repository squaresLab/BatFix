int findMaxValue ( int mat [ ] [ N ] ) {
  int maxValue = 0 ;
  for ( int a = 0 ;
  a < N - 1 ;
  a ++ ) {
    for ( int b = 0 ;
    b < N - 1 ;
    b ++ ) {
      for ( int d = a + 1 ;
      d < N ;
      d ++ ) {
        for ( int e = b + 1 ;
        e < N ;
        e ++ ) {
          if ( maxValue < ( int ) mat [ d ] [ e ] - mat [ a ] [ b ] ) {
            maxValue = ( int ) mat [ d ] [ e ] - mat [ a ] [ b ] ;
            ;
          }
        }
      }
    }
  }
  return maxValue ;
  ;
}
