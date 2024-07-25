int countSubStr ( char str [ ] , int n ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( str [ i ] == '1' ) {
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( str [ j ] == '1' ) {
          res ++ ;
        }
      }
    }
  }
  return res ;
}
