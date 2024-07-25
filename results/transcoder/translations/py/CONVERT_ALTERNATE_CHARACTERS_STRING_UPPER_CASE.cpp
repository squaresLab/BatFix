void convertOpposite ( string str ) {
  int ln = str . length ( ) ;
  for ( int i = 0 ;
  i < ln ;
  i ++ ) {
    if ( str [ i ] >= 'a' && str [ i ] <= 'z' ) str [ i ] = ( char ) ( ( str [ i ] - 32 ) + 32 ) ;
    else if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) str [ i ] = ( char ) ( ( str [ i ] + 32 ) + 32 ) ;
  }
}
