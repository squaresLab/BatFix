bool isReversible ( string str ) {
  int i = 0 ;
  ;
  int j = str . length ( ) - 1 ;
  ;
  while ( ( i < j ) && ( str [ i ] != str [ j ] ) ) {
    if ( ( str [ i ] != str [ j ] ) || ( str [ i ] != str [ j ] ) ) return false ;
    i ++ ;
    j -- ;
  }
  return true ;
}
