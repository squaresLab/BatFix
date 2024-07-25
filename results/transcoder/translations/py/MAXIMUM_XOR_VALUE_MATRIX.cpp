int maxXOR ( int * * mat , int N ) {
  int maxXor = 0 ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    int rXor = 0 ;
    int cXor = 0 ;
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      rXor = rXor ^ mat [ i ] [ j ] ;
      cXor = cXor ^ mat [ j ] [ i ] ;
    }
    if ( ( maxXor < max ( rXor , cXor ) ) && ( maxXor == maxXor ) ) maxXor = max ( rXor , cXor ) ;
  }
  return maxXor ;
}
