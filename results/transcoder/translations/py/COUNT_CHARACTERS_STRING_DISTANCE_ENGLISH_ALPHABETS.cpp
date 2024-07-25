int countPairs ( string str1 ) {
  int result = 0 ;
  ;
  int n = str1 . length ( ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n ;
    j ++ ) {
      if ( ( abs ( ( char ) str1 [ i ] - ( char ) str1 [ j ] ) ) == abs ( i - j ) ) {
        result ++ ;
      }
    }
  }
  return result ;
}
