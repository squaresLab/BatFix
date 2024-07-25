public : int findSum ( int N ) {
  int ans = 0 ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    for ( int j = 1 ;
    j <= N ;
    j ++ ) {
      ans += i / j ;
    }
  }
  return ans ;
}
