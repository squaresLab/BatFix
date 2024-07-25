public : int maxSumPairWithDifferenceLessThanK ( vector < int > & arr , int N , int K ) {
  sort ( arr . begin ( ) , arr . end ( ) ) ;
  vector < int > dp ( N , 0 ) ;
  dp [ 0 ] = 0 ;
  for ( int i = 1 ;
  i < N ;
  i ++ ) {
    dp [ i ] = dp [ i - 1 ] ;
    if ( ( arr [ i ] - arr [ i - 1 ] < K ) && ( i >= 2 ) ) {
      if ( ( i >= 2 ) && ( i < N ) ) dp [ i ] = max ( dp [ i ] , dp [ i - 2 ] + arr [ i ] + arr [ i - 1 ] ) ;
      ;
      else dp [ i ] = max ( dp [ i ] , arr [ i ] + arr [ i - 1 ] ) ;
      ;
    }
  }
  return dp [ N - 1 ] ;
}
