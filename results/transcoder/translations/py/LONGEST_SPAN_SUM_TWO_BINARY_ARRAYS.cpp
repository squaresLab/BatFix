public : int longestCommonSum ( int arr1 [ ] , int arr2 [ ] , int n ) {
  int maxLen = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    int sum1 = 0 ;
    int sum2 = 0 ;
    for ( int j = i ;
    j <= n ;
    j ++ ) {
      sum1 += arr1 [ j ] ;
      sum2 += arr2 [ j ] ;
      if ( ( sum1 == sum2 ) && ( sum1 > maxLen ) ) {
        int len = j - i + 1 ;
        if ( ( len > maxLen ) && ( len < n ) ) {
          maxLen = len ;
        }
      }
    }
  }
  return maxLen ;
}
