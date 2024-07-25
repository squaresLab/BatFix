bool canFormPalindrome ( string st ) {
  int count [ NO_OF_CHARS ] = {
    0 }
    ;
    for ( int i = 0 ;
    i != st . length ( ) ;
    i ++ ) count [ ( int ) st [ i ] ] = count [ ( int ) st [ i ] ] + 1 ;
    int odd = 0 ;
    for ( int i = 0 ;
    i != NO_OF_CHARS ;
    i ++ ) {
      if ( ( count [ i ] & 1 ) != 0 ) odd = odd + 1 ;
      if ( ( odd > 1 ) || ( odd < 0 ) ) return false ;
    }
    return true ;
  }
  