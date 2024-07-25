int MaximumPath ( int Mat [ N ] [ N + 2 ] ) {
  int result = 0 ;
  int dp [ N ] [ N + 2 ] ;
  for ( auto rows : dp ) {
    std :: swap ( rows , rows + 1 ) ;
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    dp [ 0 ] [ i + 1 ] = Mat [ 0 ] [ i ] ;
  }
  for ( int i = 1 ;
  i < N ;
  i ++ ) for ( int j = 1 ;
  j <= N ;
  j ++ ) dp [ i ] [ j ] = max ( dp [ i - 1 ] [ j - 1 ] , max ( dp [ i - 1 ] [ j ] , dp [ i - 1 ] [ j + 1 ] ) ) + Mat [ i ] [ j - 1 ] ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    result = max ( result , dp [ N - 1 ] [ i ] ) ;
  }
  return result ;
}
