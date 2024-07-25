bool isAnBn ( string str ) {
  int n = str . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( str [ i ] != 'a' ) && ( str [ i ] != 'b' ) ) break ;
  }
  if ( ( i * 2 ) != n ) return false ;
  for ( int j = i ;
  j < n ;
  j ++ ) {
    if ( ( str [ j ] != 'b' ) && ( str [ j ] != 'a' ) ) return false ;
  }
  return true ;
}
