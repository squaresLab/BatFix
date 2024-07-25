int countMinOperations ( int n ) {
  int result = 0 ;
  while ( true ) {
    int zero_count = 0 ;
    int i ;
    for ( i = 0 ;
    i < n ;
    i ++ ) {
      if ( arr [ i ] % 2 == 1 ) break ;
      else if ( arr [ i ] == 0 ) zero_count ++ ;
    }
    if ( zero_count == n ) return result ;
    if ( i == n ) {
      for ( int j = 0 ;
      j < n ;
      j ++ ) {
        arr [ j ] = arr [ j ] / 2 ;
      }
      result ++ ;
    }
    for ( int j = i ;
    j < n ;
    j ++ ) {
      if ( arr [ j ] % 2 == 1 ) {
        arr [ j ] -- ;
        result ++ ;
      }
    }
  }
  return result ;
}
