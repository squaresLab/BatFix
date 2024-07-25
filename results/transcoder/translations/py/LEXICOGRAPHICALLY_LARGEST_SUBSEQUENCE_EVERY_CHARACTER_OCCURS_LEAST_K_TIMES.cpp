void subsequence ( char * s , char * t , int n , int k ) {
  int last = 0 ;
  int cnt ;
  int new_last = 0 ;
  int size = 0 ;
  char string [ ] = "zyxwvutsrqponmlkjihgfedcba" ;
  for ( char ch : string ) {
    cnt = 0 ;
    for ( int i = last ;
    i < n ;
    i ++ ) {
      if ( s [ i ] == ch ) cnt ++ ;
    }
    if ( cnt >= k ) {
      for ( int i = last ;
      i < n ;
      i ++ ) {
        if ( s [ i ] == ch ) {
          t [ size ] = ch ;
          new_last = i ;
          size ++ ;
        }
      }
      last = new_last ;
    }
  }
}
