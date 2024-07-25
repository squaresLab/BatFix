int MaximumPath ( int Mat [ ] [ N + 2 ] ) {
  int result = 0 ;
  int dp [ N + 2 ] [ N + 1 ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 1 ;
    j <= N ;
    j ++ ) {
      dp [ i ] [ j ] = max ( dp [ i - 1 ] [ j - 1 ] , max ( dp [ i - 1 ] [ j ] , dp [ i - 1 ] [ j + 1 ] ) ) + Mat [ i ] [ j - 1 ] ;
    }
  }
  for ( int i = 0 ;
  i < N + 1 ;
  i ++ ) {
    result = max ( result , dp [ N - 1 ] [ i ] ) ;
  }
  return result ;
}
