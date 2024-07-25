int MaxDotProduct ( int A [ ] , int B [ ] , int m , int n ) {
  int dp [ n + 1 ] [ m + 1 ] ;
  for ( int row : dp ) {
    memset ( row , 0 , sizeof ( row ) ) ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) for ( int j = i ;
  j <= m ;
  j ++ ) dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] ) ;
  return dp [ n ] [ m ] ;
}
