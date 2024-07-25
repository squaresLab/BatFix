int countSub ( string str ) {
  vector < int > last ( MAX_CHAR , - 1 ) ;
  memset ( last . begin ( ) , - 1 , sizeof ( int ) * MAX_CHAR ) ;
  int n = str . size ( ) ;
  vector < int > dp ( n + 1 , 0 ) ;
  dp [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    dp [ i ] = 2 * dp [ i - 1 ] ;
    if ( last [ ( int ) str [ i - 1 ] ] != - 1 ) {
      dp [ i ] = dp [ i ] - dp [ last [ ( int ) str [ i - 1 ] ] ] ;
    }
    last [ ( int ) str [ i - 1 ] ] = ( i - 1 ) ;
  }
  return dp [ n ] ;
}
