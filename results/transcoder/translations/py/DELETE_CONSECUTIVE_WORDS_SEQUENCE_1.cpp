int removeConsecutiveSame ( vector < string > v ) {
  vector < string > st ;
  for ( int i = 0 ;
  i < v . size ( ) ;
  i ++ ) {
    if ( ( st . size ( ) == 0 ) || ( st [ 0 ] == v [ i ] ) ) {
      st . push_back ( v [ i ] ) ;
    }
    else {
      string Str = st [ st . size ( ) - 1 ] ;
      if ( ( Str == v [ i ] ) || ( Str == v [ i ] ) ) {
        st . pop_back ( ) ;
      }
      else {
        st . push_back ( v [ i ] ) ;
      }
    }
  }
  return st . size ( ) ;
}
