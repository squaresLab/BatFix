public : int findMaxSum ( int arr [ ] , int n ) {
  int res = - INT_MAX - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int prefixSum = arr [ i ] ;
    for ( int j = 0 ;
    j < i ;
    j ++ ) {
      prefixSum += arr [ j ] ;
    }
    int suffixSum = arr [ i ] ;
    int j = n - 1 ;
    while ( ( j > i ) && ( j < n ) ) {
      suffixSum += arr [ j ] ;
      j -- ;
    }
    if ( ( prefixSum == suffixSum ) || ( suffixSum == i ) ) {
      res = max ( res , prefixSum ) ;
    }
  }
  return res ;
}
