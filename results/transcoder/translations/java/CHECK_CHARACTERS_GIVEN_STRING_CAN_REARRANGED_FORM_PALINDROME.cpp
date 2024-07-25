bool canFormPalindrome ( string str ) {
  int count [ NO_OF_CHARS ] ;
  memset ( count , 0 , sizeof ( count ) ) ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    count [ ( int ) ( str [ i ] ) ] ++ ;
  }
  int odd = 0 ;
  for ( int i = 0 ;
  i < NO_OF_CHARS ;
  i ++ ) {
    if ( ( count [ i ] & 1 ) == 1 ) {
      odd ++ ;
    }
    if ( odd > 1 ) {
      return false ;
    }
  }
  return true ;
}
