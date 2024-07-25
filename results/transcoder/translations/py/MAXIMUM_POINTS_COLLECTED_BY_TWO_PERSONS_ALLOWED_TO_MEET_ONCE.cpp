int findMaxPoints ( int A [ ] [ N + 2 ] ) {
  int P1S [ N + 2 ] [ M + 2 ] ;
  int P1E [ N + 2 ] [ M + 2 ] ;
  int P2S [ N + 2 ] [ M + 2 ] ;
  int P2E [ N + 2 ] [ M + 2 ] ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    for ( int j = 1 ;
    j <= M ;
    j ++ ) P1S [ i ] [ j ] = max ( P1S [ i - 1 ] [ j ] , P1S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
  }
  for ( int i = N ;
  i > 0 ;
  i -- ) {
    for ( int j = M ;
    j > 0 ;
    j -- ) {
      P1S [ i ] [ j ] = max ( P1S [ i - 1 ] [ j ] , P1S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
    }
  }
  for ( int i = N ;
  i > 0 ;
  i -- ) {
    for ( int j = M ;
    j > 0 ;
    j -- ) {
      P1E [ i ] [ j ] = max ( P1E [ i + 1 ] [ j ] , P1E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
    }
  }
  for ( int i = N ;
  i > 0 ;
  i -- ) {
    for ( int j = 1 ;
    j <= M ;
    j ++ ) {
      P2S [ i ] [ j ] = max ( P2S [ i + 1 ] [ j ] , P2S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
    }
  }
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    for ( int j = M ;
    j > 0 ;
    j -- ) {
      P2E [ i ] [ j ] = max ( P2E [ i - 1 ] [ j ] , P2E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
    }
  }
  int ans = 0 ;
  for ( int i = 2 ;
  i <= N ;
  i ++ ) {
    for ( int j = 2 ;
    j <= M ;
    j ++ ) {
      int op1 = P1S [ i ] [ j - 1 ] + P @@