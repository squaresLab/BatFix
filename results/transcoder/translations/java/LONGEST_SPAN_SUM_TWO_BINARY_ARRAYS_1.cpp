int longestCommonSum ( int n ) {
  int maxLen = 0 ;
  int preSum1 = 0 , preSum2 = 0 ;
  int diff [ 2 * n + 1 ] ;
  for ( int i = 0 ;
  i < diff . length ( ) ;
  i ++ ) diff [ i ] = - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    preSum1 += arr1 [ i ] ;
    preSum2 += arr2 [ i ] ;
    int curr_diff = preSum1 - preSum2 ;
    int diff_index = n + curr_diff ;
    if ( curr_diff == 0 ) {
      maxLen = i + 1 ;
    }
    else if ( diff [ diff_index ] == - 1 ) {
      diff [ diff_index ] = i ;
    }
    else {
      int len = i - diff [ diff_index ] ;
      if ( len > maxLen ) maxLen = len ;
    }
  }
  return maxLen ;
}
