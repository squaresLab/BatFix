int countIntegralSolutions ( int n ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      for ( int k = 0 ;
      k < n + 1 ;
      k ++ ) {
        if ( i + j + k == n ) {
          result ++ ;
        }
      }
    }
  }
  return result ;
}
