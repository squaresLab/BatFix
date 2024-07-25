int minCells ( int mat [ ] [ 2 ] , int m , int n ) {
  int dp [ m ] [ n ] ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) for ( int j = 0 ;
  j < n ;
  j ++ ) dp [ i ] [ j ] = INT_MAX ;
  dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( dp [ i ] [ j ] != INT_MAX && ( j + mat [ i ] [ j ] ) < n && ( dp [ i ] [ j ] + 1 ) < dp [ i ] [ j + mat [ i ] [ j ] ] ) {
        dp [ i ] [ j + mat [ i ] [ j ] ] = dp [ i ] [ j ] + 1 ;
      }
      if ( dp [ i ] [ j ] != INT_MAX && ( i + mat [ i ] [ j ] ) < m && ( dp [ i ] [ j ] + 1 ) < dp [ i + mat [ i ] [ j ] ] [ j ] ) {
        dp [ i + mat [ i ] [ j ] ] [ j ] = dp [ i ] [ j ] + 1 ;
      }
    }
  }
  if ( dp [ m - 1 ] [ n - 1 ] != INT_MAX ) return dp [ m - 1 ] [ n - 1 ] ;
  return - 1 ;
}
