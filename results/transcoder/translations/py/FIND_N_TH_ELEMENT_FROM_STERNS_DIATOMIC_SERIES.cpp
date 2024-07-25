public : int findSDSFunc ( int n ) {
  vector < int > DP ( n + 1 , 0 ) ;
  DP [ 0 ] = 0 ;
  DP [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    if ( ( int ) i % 2 == 0 ) DP [ i ] = DP [ ( int ) i / 2 ] ;
    else DP [ i ] = ( DP [ ( int ) ( ( i - 1 ) / 2 ) ] + DP [ ( int ) ( ( i + 1 ) / 2 ) ] ) ;
  }
  return DP [ n ] ;
}
