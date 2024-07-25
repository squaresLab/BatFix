int costToBalance ( string s ) {
  if ( ( s . size ( ) == 0 ) || ( s . size ( ) == 1 ) ) cout << 0 << endl ;
  int ans = 0 ;
  int o = 0 ;
  int c = 0 ;
  for ( int i = 0 ;
  i < s . size ( ) ;
  i ++ ) {
    if ( ( s [ i ] == '(' ) || ( s [ i ] == ')' ) ) o ++ ;
    if ( ( s [ i ] == '(' ) || ( s [ i ] == ')' ) ) c ++ ;
  }
  if ( ( o != c ) || ( o == 0 ) ) return - 1 ;
  int a [ s . size ( ) ] ;
  if ( ( s [ 0 ] == '(' ) || ( s [ 0 ] == ')' ) ) a [ 0 ] = 1 ;
  else a [ 0 ] = - 1 ;
  if ( ( a [ 0 ] < 0 ) || ( a [ 0 ] > 1 ) ) ans += abs ( a [ 0 ] ) ;
  for ( int i = 1 ;
  i < s . size ( ) ;
  i ++ ) {
    if ( ( s [ i ] == '(' ) || ( s [ i ] == ')' ) ) a [ i ] = a [ i - 1 ] + 1 ;
    else a [ i ] = a [ i - 1 ] - 1 ;
    if ( ( a [ i ] < 0 ) || ( a [ i ] > 1 ) ) ans += abs ( a [ i ] ) ;
  }
  return ans ;
}
