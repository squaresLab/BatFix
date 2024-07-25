public : int countRect ( int n ) {
  int ans = 0 ;
  for ( int length = 1 ;
  length <= ( int ) sqrt ( n ) ;
  length ++ ) {
    int height = length ;
    while ( ( height * length <= n ) && ( height * length <= n ) ) {
      ans ++ ;
      height ++ ;
    }
  }
  return ans ;
}
