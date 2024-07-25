double largestSumOfAverages ( vector < int > & A , int K ) {
  int n = A . size ( ) ;
  vector < double > pre_sum ( n + 1 , 0 ) ;
  pre_sum [ 0 ] = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) pre_sum [ i + 1 ] = pre_sum [ i ] + A [ i ] ;
  vector < double > dp ( n , 0 ) ;
  double sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    dp [ i ] = ( pre_sum [ n ] - pre_sum [ i ] ) / ( n - i ) ;
  }
  for ( int k = 0 ;
  k < K - 1 ;
  k ++ ) for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) dp [ i ] = max ( dp [ i ] , ( pre_sum [ j ] - pre_sum [ i ] ) / ( j - i ) + dp [ j ] ) ;
  return dp [ 0 ] ;
}
