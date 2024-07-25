public : int findSum ( int n ) {
  int ans = 0 ;
  ;
  int temp = 0 ;
  ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    if ( temp < n ) {
      temp = i - 1 ;
      int num = 1 ;
      while ( temp < n ) {
        if ( temp + i <= n ) ans += i * num ;
        else ans += ( n - temp ) * num ;
        temp += i ;
        num ++ ;
      }
    }
  }
  return ans ;
}
