int minCost ( int cost [ ] , int m , int n ) {
  int tc [ C ] [ R ] ;
  tc [ 0 ] [ 0 ] = cost [ 0 ] [ 0 ] ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) tc [ i ] [ 0 ] = tc [ i - 1 ] [ 0 ] + cost [ i ] [ 0 ] ;
  for ( int j = 1 ;
  j <= n ;
  j ++ ) tc [ 0 ] [ j ] = tc [ 0 ] [ j - 1 ] + cost [ 0 ] [ j ] ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) for ( int j = 1 ;
  j <= n ;
  j ++ ) tc [ i ] [ j ] = min ( tc [ i - 1 ] [ j - 1 ] , tc [ i - 1 ] [ j ] , tc [ i ] [ j - 1 ] ) + cost [ i ] [ j ] ;
  return tc [ m ] [ n ] ;
}
