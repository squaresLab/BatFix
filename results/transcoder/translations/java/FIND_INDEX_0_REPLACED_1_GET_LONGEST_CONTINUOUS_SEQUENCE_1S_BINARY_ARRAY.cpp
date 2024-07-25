int maxOnesIndex ( int arr [ ] , int n ) {
  int max_count = 0 ;
  int max_index = 0 ;
  int prev_zero = - 1 ;
  int prev_prev_zero = - 1 ;
  for ( int curr = 0 ;
  curr < n ;
  ++ curr ) {
    if ( arr [ curr ] == 0 ) {
      if ( curr - prev_prev_zero > max_count ) {
        max_count = curr - prev_prev_zero ;
        max_index = prev_zero ;
      }
      prev_prev_zero = prev_zero ;
      prev_zero = curr ;
    }
  }
  if ( n - prev_prev_zero > max_count ) {
    max_index = prev_zero ;
  }
  return max_index ;
}
