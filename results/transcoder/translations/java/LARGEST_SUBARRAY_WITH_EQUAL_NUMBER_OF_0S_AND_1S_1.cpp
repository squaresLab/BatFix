int maxLen ( int arr [ ] , int n ) {
  unordered_map < int , int > hM ;
  int sum = 0 ;
  int max_len = 0 ;
  int ending_index = - 1 ;
  int start_index = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = ( arr [ i ] == 0 ) ? - 1 : 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( sum == 0 ) {
      max_len = i + 1 ;
      ending_index = i ;
    }
    if ( hM . count ( sum + n ) ) {
      if ( max_len < i - hM [ sum + n ] ) {
        max_len = i - hM [ sum + n ] ;
        ending_index = i ;
      }
    }
    else hM [ sum + n ] = i ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = ( arr [ i ] == - 1 ) ? 0 : 1 ;
  int end = ending_index - max_len + 1 ;
  cout << end << " to " << ending_index << endl ;
  return max_len ;
}
