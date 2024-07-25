public : int minTimeForWritingChars ( int N , int insrt , int remov , int cpy ) {
  if ( N == 0 ) return 0 ;
  if ( N == 1 ) return insrt ;
  int * dp = new int [ N + 1 ] ;
  dp [ 0 ] = 0 ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    if ( i % 2 == 0 ) dp [ i ] = min ( dp [ i - 1 ] + insrt , dp [ i / 2 ] + cpy ) ;
    else dp [ i ] = min ( dp [ i - 1 ] + insrt , dp [ ( i + 1 ) / 2 ] + cpy + remov ) ;
  }
  returndp [ N ] = dp ;
}
