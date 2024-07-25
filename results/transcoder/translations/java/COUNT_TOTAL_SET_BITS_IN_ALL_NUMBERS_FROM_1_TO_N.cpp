int countSetBits ( int n ) {
  int i = 0 ;
  int ans = 0 ;
  while ( ( 1 << i ) <= n ) {
    bool k = false ;
    int change = 1 << i ;
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( k == true ) {
        ans += 1 ;
      }
      else {
        ans += 0 ;
      }
      if ( change == 1 ) {
        k = ! k ;
        change = 1 << i ;
      }
      else {
        change -- ;
      }
    }
    i ++ ;
  }
  return ans ;
}
