int catalan ( int n ) {
  int res = 0 ;
  if ( n <= 1 ) {
    return 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    res += catalan ( i ) * catalan ( n - i - 1 ) ;
  }
  return res ;
}
