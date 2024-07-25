int maxSubArraySum ( int a [ ] , int size ) {
  int maxSoFar = a [ 0 ] ;
  int currMax = a [ 0 ] ;
  for ( int i = 1 ;
  i < size ;
  i ++ ) {
    currMax = max ( a [ i ] , currMax + a [ i ] ) ;
    maxSoFar = max ( maxSoFar , currMax ) ;
  }
  return maxSoFar ;
}
