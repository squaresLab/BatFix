public : int count ( int n ) {
  vector < int > dp ( n + 1 , 0 ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    if ( i <= 3 ) dp [ i ] = 1 ;
    else if ( i == 4 ) dp [ i ] = 2 ;
    else dp [ i ] = dp [ i - 1 ] + dp [ i - 4 ] ;
  }
  return dp [ n ] ;
}
