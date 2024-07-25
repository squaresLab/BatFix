bool checkPangram ( string s ) {
  bool List [ 26 ] ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) List [ i ] = false ;
  for ( char c : s . lower ( ) ) if ( ! c == ' ' ) List [ ( int ) ( c - 'a' ) ] = true ;
  for ( bool * ch = List ;
  * ch ;
  ch ++ ) if ( * ch == false ) return false ;
  return true ;
}
