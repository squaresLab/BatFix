int CountSubstring ( char str [ ] , int n ) {
  int ans = ( n * ( n + 1 ) ) / 2 ;
  int a_index = 0 ;
  int b_index = 0 ;
  int c_index = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( str [ i ] == 'a' ) {
      a_index = i + 1 ;
      ans -= min ( b_index , c_index ) ;
    }
    else if ( str [ i ] == 'b' ) {
      b_index = i + 1 ;
      ans -= min ( a_index , c_index ) ;
    }
    else {
      c_index = i + 1 ;
      ans -= min ( a_index , b_index ) ;
    }
  }
  return ans ;
}
