int maxLen ( int arr [ ] , int n ) {
  int max_len = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int curr_sum = 0 ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      curr_sum += arr [ j ] ;
      if ( curr_sum == 0 ) {
        max_len = max ( max_len , j - i + 1 ) ;
      }
    }
  }
  return max_len ;
}
