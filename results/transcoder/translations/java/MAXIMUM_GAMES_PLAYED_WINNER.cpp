int maxGameByWinner ( int N ) {
  int * dp = new int [ N ] ;
  dp [ 0 ] = 1 ;
  dp [ 1 ] = 2 ;
  int i = 2 ;
  do {
    dp [ i ] = dp [ i - 1 ] + dp [ i - 2 ] ;
  }
  while ( dp [ i ++ ] <= N ) ;
  delete [ ] dp ;
  return ( i - 2 ) ;
}
