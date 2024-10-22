int find_prob ( int N , int P ) {
  int dp [ N + 1 ] ;
  dp [ 0 ] = 1 ;
  dp [ 1 ] = 0 ;
  dp [ 2 ] = P ;
  dp [ 3 ] = 1 - P ;
  for ( int i = 4 ;
  i <= N ;
  i ++ ) dp [ i ] = ( P ) * dp [ i - 2 ] + ( 1 - P ) * dp [ i - 3 ] ;
  return dp [ N ] ;
}
