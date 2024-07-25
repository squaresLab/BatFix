int minCells ( int mat [ ] [ ] , int m , int n ) {
  int dp [ n ] [ m ] ;
  dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( dp [ i ] [ j ] != MAX && ( j + mat [ i ] [ j ] ) < n && ( dp [ i ] [ j ] + 1 ) < dp [ i ] [ j + mat [ i ] [ j ] ] ) dp [ i ] [ j + mat [ i ] [ j ] ] = dp [ i ] [ j ] + 1 ;
      if ( ( dp [ i ] [ j ] != MAX && ( i + mat [ i ] [ j ] ) < m && ( dp [ i ] [ j ] + 1 ) < dp [ i + mat [ i ] [ j ] ] ) dp [ i + mat [ i ] [ j ] ] = dp [ i ] [ j ] + 1 ;
    }
  }
  if ( ( dp [ m - 1 ] [ n - 1 ] != MAX ) && ( dp [ m - 1 ] [ n - 1 ] ) < m && ( dp [ m ] [ n - 1 ] + 1 ) < dp [ m + mat [ i ] [ j ] ] ) dp [ m - 1 ] [ n - 1 ] = dp [ m ] [ n - 1 ] + 1 ;
  return dp [ m - 1 ] [ n - 1 ] ;
}
