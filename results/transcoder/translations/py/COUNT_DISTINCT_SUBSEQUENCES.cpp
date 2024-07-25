int countSub ( string ss ) {
  int last [ MAX_CHAR + 1 ] ;
  int n = ss . size ( ) ;
  int dp [ n + 1 ] ;
  dp [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    dp [ i ] = 2 * dp [ i - 1 ] ;
    if ( last [ ( char ) ss [ i - 1 ] ] != - 1 ) dp [ i ] = dp [ i ] - dp [ last [ ( char ) ss [ i - 1 ] ] ] ;
    last [ ( char ) ss [ i - 1 ] ] = i - 1 ;
  }
  return dp [ n ] ;
}
