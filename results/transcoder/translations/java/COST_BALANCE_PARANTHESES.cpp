int costToBalance ( string s ) {
  if ( s . size ( ) == 0 ) {
    cout << 0 << endl ;
  }
  int ans = 0 ;
  int o = 0 , c = 0 ;
  for ( int i = 0 ;
  i < s . size ( ) ;
  i ++ ) {
    if ( s [ i ] == '(' ) {
      o ++ ;
    }
    if ( s [ i ] == ')' ) {
      c ++ ;
    }
  }
  if ( o != c ) {
    return - 1 ;
  }
  int a [ s . size ( ) ] ;
  if ( s [ 0 ] == '(' ) {
    a [ 0 ] = 1 ;
  }
  else {
    a [ 0 ] = - 1 ;
  }
  if ( a [ 0 ] < 0 ) {
    ans += abs ( a [ 0 ] ) ;
  }
  for ( int i = 1 ;
  i < s . size ( ) ;
  i ++ ) {
    if ( s [ i ] == '(' ) {
      a [ i ] = a [ i - 1 ] + 1 ;
    }
    else {
      a [ i ] = a [ i - 1 ] - 1 ;
    }
    if ( a [ i ] < 0 ) {
      ans += abs ( a [ i ] ) ;
    }
  }
  return ans ;
}
