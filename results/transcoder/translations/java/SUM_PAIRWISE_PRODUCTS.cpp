int findSum ( int n ) {
  int sum = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) for ( int j = i ;
  j <= n ;
  j ++ ) sum = sum + i * j ;
  return sum ;
}
