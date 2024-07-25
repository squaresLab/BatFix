int findSum ( int N , int K ) {
  int ans = 0 ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    ans += ( i % K ) ;
  }
  return ans ;
}
