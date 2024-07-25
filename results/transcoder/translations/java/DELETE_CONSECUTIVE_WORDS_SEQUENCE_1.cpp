int removeConsecutiveSame ( Vector < String > & v ) {
  Stack < String > st ;
  for ( int i = 0 ;
  i < v . size ( ) ;
  i ++ ) {
    if ( st . empty ( ) ) {
      st . push ( v [ i ] ) ;
    }
    else {
      String str = st . top ( ) ;
      if ( str == v [ i ] ) {
        st . pop ( ) ;
      }
      else {
        st . push ( v [ i ] ) ;
      }
    }
  }
  return st . size ( ) ;
}
