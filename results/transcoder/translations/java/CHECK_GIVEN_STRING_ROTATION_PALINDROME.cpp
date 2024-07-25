bool isPalindrome ( string str ) {
  int l = 0 ;
  int h = str . length ( ) - 1 ;
  while ( h > l ) if ( str [ l ++ ] != str [ h -- ] ) return false ;
  return true ;
}
