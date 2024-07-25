int findLength ( string & string , int n ) {
  int currentSum = 0 ;
  int maxSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currentSum += ( 1 == string [ i ] ) ? - 1 : 1 ;
    if ( currentSum < 0 ) currentSum = 0 ;
    maxSum = max ( currentSum , maxSum ) ;
  }
  return maxSum == 0 ? 0 : maxSum ;
}
