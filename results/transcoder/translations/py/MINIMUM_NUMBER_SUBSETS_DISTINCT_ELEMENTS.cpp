int subset ( int ar [ ] , int n ) {
  int res = 0 ;
  sort ( ar , ar + n ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    int count = 1 ;
    for ( int j = 0 ;
    j < n - 1 ;
    j ++ ) {
      if ( ar [ i ] == ar [ i + 1 ] ) count ++ ;
      else break ;
    }
    res = max ( res , count ) ;
  }
  return res ;
}
