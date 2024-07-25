int countSubStr ( char str [ ] , int n ) {
  int m = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( str [ i ] == '1' ) {
      m ++ ;
    }
  }
  return m * ( m - 1 ) / 2 ;
}
