int findSum ( int n ) {
  int ans = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) for ( int j = 1 ;
  j <= n ;
  j ++ ) ans += ( i / j ) ;
  return ans ;
}
