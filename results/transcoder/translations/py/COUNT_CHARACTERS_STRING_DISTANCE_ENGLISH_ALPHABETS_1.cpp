int countPairs ( string str1 ) {
  int result = 0 ;
  ;
  int n = str1 . length ( ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= MAX_CHAR ;
    j ++ ) {
      if ( ( ( i + j ) < n ) && ( ( abs ( ( char ) str1 [ i + j ] - ( char ) str1 [ i ] ) ) == j ) ) {
        result ++ ;
      }
      ;
    }
  }
  return result ;
}
