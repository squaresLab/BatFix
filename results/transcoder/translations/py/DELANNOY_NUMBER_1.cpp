int dealnnoy ( int n , int m ) {
  int dp [ n + 1 ] [ m + 1 ] ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) dp [ 0 ] [ i ] = 1 ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) dp [ i ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) for ( int j = 1 ;
  j <= n ;
  j ++ ) dp [ i ] [ j ] = dp [ i - 1 ] [ j ] + dp [ i - 1 ] [ j - 1 ] + dp [ i ] [ j - 1 ] ;
  ;
}
