int maximumChars ( string str ) {
  int n = str . length ( ) ;
  int res = - 1 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) if ( str [ i ] == str [ j ] ) res = max ( res , abs ( j - i - 1 ) ) ;
  return res ;
}
