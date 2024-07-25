int findSum ( int n ) {
  int ans = 0 , temp = 0 , num ;
  for ( int i = 1 ;
  i <= n && temp < n ;
  i ++ ) {
    temp = i - 1 ;
    num = 1 ;
    while ( temp < n ) {
      if ( temp + i <= n ) {
        ans += ( i * num ) ;
      }
      else {
        ans += ( ( n - temp ) * num ) ;
      }
      temp += i ;
      num ++ ;
    }
  }
  return ans ;
}
