int minimalSteps ( string s , int n ) {
  vector < int > dp ( n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    dp [ i ] = INT_MAX ;
  }
  string s1 , s2 ;
  dp [ 0 ] = 1 ;
  s1 += s [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    s1 += s [ i ] ;
    s2 = s . substr ( i + 1 , 1 ) ;
    dp [ i ] = min ( dp [ i ] , dp [ i - 1 ] + 1 ) ;
    if ( s1 == s2 ) {
      dp [ i * 2 + 1 ] = min ( dp [ i ] + 1 , dp [ i * 2 + 1 ] ) ;
    }
  }
  return dp [ n - 1 ] ;
}
