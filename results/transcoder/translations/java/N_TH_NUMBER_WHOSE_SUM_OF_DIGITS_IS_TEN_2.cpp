int findNth ( int n ) {
  int nth_element = 19 + ( n - 1 ) * 9 ;
  int outliers_count = ( int ) log10 ( nth_element ) - 1 ;
  nth_element += 9 * outliers_count ;
  return nth_element ;
}
