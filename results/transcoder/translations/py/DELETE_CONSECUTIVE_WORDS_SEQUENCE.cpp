int removeConsecutiveSame ( vector < int > v ) {
  int n = v . size ( ) ;
  int i = 0 ;
  while ( ( i < n - 1 ) && ( v [ i ] == v [ i + 1 ] ) ) {
    if ( ( ( i + 1 ) < v . size ( ) ) && ( v [ i ] == v [ i + 1 ] ) ) {
      v . erase ( v . begin ( ) + i ) ;
      v . erase ( v . begin ( ) + i + 1 ) ;
      if ( ( i > 0 ) && ( v [ i ] == v [ i - 1 ] ) ) i -- ;
      n = n - 2 ;
    }
    else i ++ ;
  }
  return v . size ( ) - i - 1 ;
}
