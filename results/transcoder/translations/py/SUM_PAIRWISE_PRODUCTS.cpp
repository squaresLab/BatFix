int findSum ( int n ) {
  int sm = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = i ;
    j <= n ;
    j ++ ) {
      sm = sm + i * j ;
    }
  }
  return sm ;
}
