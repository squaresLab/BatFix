int countMinOperations ( int * target , int n ) {
  int result = 0 ;
  ;
  while ( ( true ) ) {
    int zeroCount = 0 ;
    ;
    int i = 0 ;
    ;
    while ( ( i < n ) && ( ( target [ i ] & 1 ) > 0 ) ) {
      if ( ( ( target [ i ] & 1 ) == 0 ) || ( ( target [ i ] & 1 ) == 0 ) ) {
        break ;
      }
      else if ( ( target [ i ] == 0 ) || ( ( target [ i ] & 1 ) == 0 ) ) {
        zeroCount ++ ;
      }
      i ++ ;
    }
    if ( ( zeroCount == n ) && ( i == n ) ) {
      for ( int j = 0 ;
      j < n ;
      j ++ ) {
        target [ j ] = target [ j ] / 2 ;
      }
      result ++ ;
    }
    forjinrange ( i , n ) {
      if ( ( target [ j ] & 1 ) ) {
        target [ j ] -- ;
        result ++ ;
      }
    }
  }
  return result ;
}
