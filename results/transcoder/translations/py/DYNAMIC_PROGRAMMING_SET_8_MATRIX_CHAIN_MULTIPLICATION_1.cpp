int MatrixChainOrder ( int p [ ] , int n ) {
  int m [ n ] [ n ] ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) m [ i ] [ i ] = 0 ;
  for ( int L = 2 ;
  L <= n ;
  L ++ ) for ( int i = 1 ;
  i <= n - L ;
  i ++ ) {
    int j = i + L - 1 ;
    m [ i ] [ j ] = INT_MAX ;
    for ( int k = i ;
    k <= j ;
    k ++ ) {
      int q = m [ i ] [ k ] + m [ k + 1 ] [ j ] + p [ i - 1 ] * p [ k ] * p [ j ] ;
      if ( q < m [ i ] [ j ] ) m [ i ] [ j ] = q ;
    }
  }
  return m [ 1 ] [ n - 1 ] ;
}
