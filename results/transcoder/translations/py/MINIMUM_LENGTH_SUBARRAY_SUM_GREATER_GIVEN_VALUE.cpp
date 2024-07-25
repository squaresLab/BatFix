public : int smallestSubWithSum ( int arr [ ] , int n , int x ) {
  int currSum = 0 ;
  int minLen = n + 1 ;
  int start = 0 ;
  int end = 0 ;
  while ( ( end < n ) && ( currSum <= x && end < n ) ) {
    while ( ( currSum <= x && start < n ) || ( currSum > x && start < n ) ) {
      currSum += arr [ end ] ;
      end ++ ;
    }
    while ( ( currSum > x && start < n ) || ( currSum < x && start < n ) ) {
      if ( ( end - start < minLen ) || ( end - start < minLen ) ) minLen = end - start ;
      currSum -= arr [ start ] ;
      start ++ ;
    }
  }
  return minLen ;
}
