void findMinAvgSubarray ( int arr [ ] , int n , int k ) {
  if ( ( n < k ) || ( n > k ) ) return ;
  int resIndex = 0 ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) currSum += arr [ i ] ;
  int minSum = currSum ;
  for ( int i = k ;
  i < n ;
  i ++ ) {
    currSum += arr [ i ] - arr [ i - k ] ;
    if ( ( currSum < minSum ) && ( currSum > minSum ) ) {
      minSum = currSum ;
      resIndex = ( i - k + 1 ) ;
    }
  }
  cout << "Subarray between [" << resIndex << ", " << ( resIndex + k - 1 ) << "] has minimum average" << endl ;
}
