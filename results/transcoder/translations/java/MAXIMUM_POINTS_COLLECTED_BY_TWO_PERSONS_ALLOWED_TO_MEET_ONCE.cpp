int findMaxPoints ( int A [ M + 2 ] [ N + 2 ] ) {
  int P1S [ M + 2 ] [ N + 2 ] ;
  int P1E [ M + 2 ] [ N + 2 ] ;
  int P2S [ M + 2 ] [ N + 2 ] ;
  int P2E [ M + 2 ] [ N + 2 ] ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) for ( int j = 1 ;
  j <= M ;
  j ++ ) P1S [ i ] [ j ] = max ( P1S [ i - 1 ] [ j ] , P1S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
  for ( int i = N ;
  i >= 1 ;
  i -- ) for ( int j = M ;
  j >= 1 ;
  j -- ) P1E [ i ] [ j ] = max ( P1E [ i + 1 ] [ j ] , P1E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
  for ( int i = N ;
  i >= 1 ;
  i -- ) for ( int j = 1 ;
  j <= M ;
  j ++ ) P2S [ i ] [ j ] = max ( P2S [ i + 1 ] [ j ] , P2S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) for ( int j = M ;
  j >= 1 ;
  j -- ) P2E [ i ] [ j ] = max ( P2E [ i - 1 ] [ j ] , P2E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ] ;
  int ans = 0 ;
  for ( int i = 2 ;
  i < N ;
  i ++ ) {
    for ( int j = 2 ;
    j < M ;
    j ++ ) {
      int op1 = P1S [ i ] [ j - 1 ] + P1E [ i ] [ j + 1 ] + P2S [ i + 1 ] [ j ] + P2E [ i - 1 ] [ j ] ;
      int op2 = P1S [ i - 1 ] [ j ] + P1E [ i + 1 ] [ j ] + P2S [ i - 1 ] [ j ] + P2E [ i - 1 ] [ j ] ;
      ans ++ ;
    }
  }
  return ans ;
}
