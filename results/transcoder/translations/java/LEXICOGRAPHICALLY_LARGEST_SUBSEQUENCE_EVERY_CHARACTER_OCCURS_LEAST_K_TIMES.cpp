void subsequence ( char s [ ] , char t [ ] , int n , int k ) {
  int last = 0 , cnt = 0 , new_last = 0 , size = 0 ;
  for ( char ch = 'z' ;
  ch >= 'a' ;
  ch -- ) {
    cnt = 0 ;
    for ( int i = last ;
    i < n ;
    i ++ ) {
      if ( s [ i ] == ch ) {
        cnt ++ ;
      }
    }
    if ( cnt >= k ) {
      for ( int i = last ;
      i < n ;
      i ++ ) {
        if ( s [ i ] == ch ) {
          t [ size ++ ] = ch ;
          new_last = i ;
        }
      }
      last = new_last ;
    }
  }
  t [ size ] = '\0' ;
}
