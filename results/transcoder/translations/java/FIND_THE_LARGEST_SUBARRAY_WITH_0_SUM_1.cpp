int maxLen ( int arr [ ] ) {
  unordered_map < int , int > hM ;
  int sum = 0 ;
  int max_len = 0 ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( arr [ i ] == 0 && max_len == 0 ) max_len = 1 ;
    if ( sum == 0 ) max_len = i + 1 ;
    int prev_i = hM . find ( sum ) ;
    if ( prev_i != hM . end ( ) ) max_len = max ( max_len , i - prev_i ) ;
    else hM [ sum ] = i ;
  }
  return max_len ;
}
