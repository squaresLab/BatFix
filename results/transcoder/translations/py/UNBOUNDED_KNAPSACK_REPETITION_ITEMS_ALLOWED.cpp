int unboundedKnapsack ( int W , int n , int * val , int * wt ) {
  int dp [ W + 1 ] ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < W + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( wt [ j ] <= i ) && ( wt [ j ] > 0 ) ) {
        dp [ i ] = max ( dp [ i ] , dp [ i - wt [ j ] ] + val [ j ] ) ;
      }
    }
  }
  return dp [ W ] ;
}
