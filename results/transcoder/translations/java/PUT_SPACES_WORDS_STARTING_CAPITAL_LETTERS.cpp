void amendSentence ( string sstr ) {
  char * str = sstr . c_str ( ) ;
  for ( int i = 0 ;
  i < strlen ( str ) ;
  i ++ ) {
    if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) {
      str [ i ] = ( char ) ( str [ i ] + 32 ) ;
      if ( i != 0 ) cout << " " ;
      cout << str [ i ] ;
    }
    else cout << str [ i ] ;
  }
}
