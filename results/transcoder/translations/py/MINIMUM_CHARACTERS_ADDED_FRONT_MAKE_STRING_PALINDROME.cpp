bool ispalindrome ( string s ) {
  int l = s . length ( ) ;
  int i = 0 ;
  int j = l - 1 ;
  while ( i <= j ) {
    if ( ( s [ i ] != s [ j ] ) && ( s [ i ] != s [ j ] ) ) return false ;
    i ++ ;
    j -- ;
  }
  return true ;
}
