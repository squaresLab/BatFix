public : int maxSumSubarrayRemovingOneEle ( int arr [ ] , int n ) {
  int fw [ n ] ;
  int bw [ n ] ;
  int curMax , maxSoFar ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    curMax = max ( arr [ i ] , curMax + arr [ i ] ) ;
    maxSoFar = max ( maxSoFar , curMax ) ;
    fw [ i ] = curMax ;
  }
  curMax = maxSoFar = bw [ n - 1 ] = arr [ n - 1 ] ;
  int i = n - 2 ;
  while ( i >= 0 ) {
    curMax = max ( arr [ i ] , curMax + arr [ i ] ) ;
    maxSoFar = max ( maxSoFar , curMax ) ;
    bw [ i ] = curMax ;
    i -- ;
  }
  int fans = maxSoFar ;
  for ( int i = 1 ;
  i < n - 1 ;
  i ++ ) {
    fans = max ( fans , fw [ i - 1 ] + bw [ i + 1 ] ) ;
  }
  return fans ;
}
