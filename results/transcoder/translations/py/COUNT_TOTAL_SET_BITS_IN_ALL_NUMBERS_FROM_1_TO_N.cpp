public : int countSetBits ( int n ) {
  int i = 0 ;
  int ans = 0 ;
  while ( ( ( 1 << i ) <= n ) && ( ans < 1 ) ) {
    bool k = 0 ;
    int change = 1 << i ;
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      ans += k ;
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
