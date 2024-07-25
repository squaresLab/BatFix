int minCost ( int a [ ] , int n , int k ) {
  int dp [ n + 1 ] [ k + 1 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) for ( int j = 0 ;
  j <= k ;
  j ++ ) dp [ i ] [ j ] = inf ;
  dp [ 0 ] [ 0 ] = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) for ( int j = 1 ;
  j <= k ;
  j ++ ) for ( int m = i - 1 ;
  m >= 0 ;
  m -- ) dp [ i ] [ j ] = min ( dp [ i ] [ j ] , dp [ m ] [ j - 1 ] + ( a [ i - 1 ] - a [ m ] ) * ( a [ i - 1 ] - a [ m ] ) ) ;
  return dp [ n ] [ k ] ;
}
