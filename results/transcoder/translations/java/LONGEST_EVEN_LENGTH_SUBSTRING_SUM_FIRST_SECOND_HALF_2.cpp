int findLength ( string str , int n ) {
  int sum [ n + 1 ] ;
  sum [ 0 ] = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    sum [ i ] = ( sum [ i - 1 ] + str [ i - 1 ] - '0' ) ;
  }
  int ans = 0 ;
  for ( int len = 2 ;
  len <= n ;
  len += 2 ) {
    for ( int i = 0 ;
    i <= n - len ;
    i ++ ) {
      int j = i + len - 1 ;
      if ( sum [ i + len / 2 ] - sum [ i ] == sum [ i + len ] - sum [ i + len / 2 ] ) {
        ans = max ( ans , len ) ;
      }
    }
  }
  return ans ;
}
