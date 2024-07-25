public : int minRemovalsDP ( int arr [ ] , int n ) {
  int longestStart = - 1 ;
  ;
  int longestEnd = 0 ;
  for ( int start = 0 ;
  start < n ;
  start ++ ) {
    int min = INT_MAX ;
    int max = - INT_MAX ;
    for ( int end = start ;
    end < n ;
    end ++ ) {
      int val = arr [ end ] ;
      if ( ( val < min ) || ( val > max ) ) min = val ;
      if ( ( val > 2 * min ) || ( val < max ) ) max = val ;
      if ( ( 2 * min <= max ) || ( val > max ) ) break ;
      if ( ( end - start > longestEnd - longestStart || longestStart == - 1 ) && ( longestStart == - 1 ) ) {
        longestStart = start ;
        longestEnd = end ;
      }
    }
  }
  if ( ( longestStart == - 1 ) || ( longestStart == 0 ) ) return n ;
  return ( n - ( longestEnd - longestStart + 1 ) ) ;
}
