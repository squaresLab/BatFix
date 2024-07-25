public : int breakSum ( int n ) {
  vector < int > dp ( n + 1 , 0 ) ;
  dp [ 0 ] = 0 ;
  dp [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    dp [ i ] = max ( dp [ int ( i / 2 ) ] + dp [ int ( i / 3 ) ] + dp [ int ( i / 4 ) ] , i ) ;
    ;
  }
  return dp [ n ] ;
}
