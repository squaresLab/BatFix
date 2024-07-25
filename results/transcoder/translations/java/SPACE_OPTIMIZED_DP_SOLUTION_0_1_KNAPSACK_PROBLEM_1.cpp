int KnapSack ( int val [ ] , int wt [ ] , int n , int W ) {
  int dp [ W + 1 ] ;
  memset ( dp , 0 , sizeof ( dp ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = W ;
  j >= wt [ i ] ;
  j -- ) dp [ j ] = max ( dp [ j ] , val [ i ] + dp [ j - wt [ i ] ] ) ;
  return dp [ W ] ;
}
