int findMaxSum ( int arr [ ] , int n ) {
  int res = INT_MIN ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int prefix_sum = arr [ i ] ;
    for ( int j = 0 ;
    j < i ;
    j ++ ) {
      prefix_sum += arr [ j ] ;
    }
    int suffix_sum = arr [ i ] ;
    for ( int j = n - 1 ;
    j > i ;
    j -- ) {
      suffix_sum += arr [ j ] ;
    }
    if ( prefix_sum == suffix_sum ) {
      res = max ( res , prefix_sum ) ;
    }
  }
  return res ;
}
