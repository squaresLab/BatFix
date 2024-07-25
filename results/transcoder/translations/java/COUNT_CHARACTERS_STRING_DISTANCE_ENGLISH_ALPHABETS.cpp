int countPairs ( string str ) {
  int result = 0 ;
  int n = str . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) if ( abs ( str [ i ] - str [ j ] ) == abs ( i - j ) ) result ++ ;
  return result ;
}
