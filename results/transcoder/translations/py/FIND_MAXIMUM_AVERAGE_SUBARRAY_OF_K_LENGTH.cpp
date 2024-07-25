int findMaxAverage ( int arr [ ] , int n , int k ) {
  if ( k > n ) return - 1 ;
  int csum [ n ] ;
  csum [ 0 ] = arr [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) csum [ i ] = csum [ i - 1 ] + arr [ i ] ;
  ;
  int maxSum = csum [ k - 1 ] ;
  int maxEnd = k - 1 ;
  for ( int i = k ;
  i < n ;
  i ++ ) {
    int currSum = csum [ i ] - csum [ i - k ] ;
    if ( currSum > maxSum ) {
      maxSum = currSum ;
      maxEnd = i ;
    }
  }
  return maxEnd - k + 1 ;
}
