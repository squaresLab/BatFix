int FirstRepeated ( string str ) {
  int checker = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  ++ i ) {
    int val = ( str [ i ] - 'a' ) ;
    if ( ( checker & ( 1 << val ) ) > 0 ) return i ;
    checker |= ( 1 << val ) ;
  }
  return - 1 ;
}
