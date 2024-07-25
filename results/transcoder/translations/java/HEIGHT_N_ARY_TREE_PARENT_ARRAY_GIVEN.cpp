int findHeight ( int * parent , int n ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int p = i , current = 1 ;
    while ( parent [ p ] != - 1 ) {
      current ++ ;
      p = parent [ p ] ;
    }
    res = max ( res , current ) ;
  }
  return res ;
}
