int maxLevel ( vector < int > & boxes , int n ) {
  sort ( boxes . begin ( ) , boxes . end ( ) ) ;
  int ans = 1 ;
  int prev_width = boxes [ 0 ] ;
  int prev_count = 1 ;
  int curr_count = 0 ;
  int curr_width = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    curr_width += boxes [ i ] ;
    curr_count += 1 ;
    if ( curr_width > prev_width && curr_count > prev_count ) {
      prev_width = curr_width ;
      prev_count = curr_count ;
      curr_count = 0 ;
      curr_width = 0 ;
      ans ++ ;
    }
  }
  return ans ;
}
