int findLength ( string str , int n ) {
  int ans = 0 ;
  for ( int i = 0 ;
  i <= n - 2 ;
  i ++ ) {
    int l = i , r = i + 1 ;
    int lsum = 0 , rsum = 0 ;
    while ( r < n && l >= 0 ) {
      lsum += str [ l ] - '0' ;
      rsum += str [ r ] - '0' ;
      if ( lsum == rsum ) ans = max ( ans , r - l + 1 ) ;
      l -- ;
      r ++ ;
    }
  }
  return ans ;
}
