int removeConsecutiveSame ( Vector < String > & v ) {
  int n = v . size ( ) ;
  for ( int i = 0 ;
  i < n - 1 ;
  ) {
    if ( v [ i ] == v [ i + 1 ] ) {
      v . remove ( i ) ;
      v . remove ( i ) ;
      if ( i > 0 ) i -- ;
      n = n - 2 ;
    }
    else i ++ ;
  }
  return v . size ( ) ;
}
