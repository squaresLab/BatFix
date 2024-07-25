bool isPalindrome ( string & string ) {
  int l = 0 ;
  int h = string . size ( ) - 1 ;
  while ( h > l ) {
    l ++ ;
    h -- ;
    if ( string [ l - 1 ] != string [ h + 1 ] ) return false ;
  }
  return true ;
}
