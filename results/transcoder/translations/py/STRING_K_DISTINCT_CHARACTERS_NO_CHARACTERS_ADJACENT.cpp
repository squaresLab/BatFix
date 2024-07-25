string findString ( int n , int k ) {
  string res = "" ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    res = res + char ( ( char ) 'a' + i ) ;
  }
  int count = 0 ;
  for ( int i = 0 ;
  i < n - k ;
  i ++ ) {
    res = res + char ( ( char ) 'a' + count ) ;
    count ++ ;
    if ( ( count == k ) || ( count == n - k ) ) {
      count = 0 ;
      ;
    }
  }
  return res ;
}
