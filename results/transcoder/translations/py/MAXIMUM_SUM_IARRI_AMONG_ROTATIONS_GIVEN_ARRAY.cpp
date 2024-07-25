int maxSum ( int arr [ ] , int n ) {
  int res = - INT_MAX ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    int currSum = 0 ;
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      int index = ( int ) ( ( i + j ) % n ) ;
      currSum += j * arr [ index ] ;
    }
    res = max ( res , currSum ) ;
  }
  return res ;
}
