int countPairs ( string str ) {
  int result = 0 ;
  int n = str . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 1 ;
  ( i + j ) < n && j <= MAX_CHAR ;
  j ++ ) if ( ( abs ( str [ i + j ] - str [ i ] ) ) == j ) result ++ ;
  return result ;
}
