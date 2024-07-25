void printStringAlternate ( string str ) {
  int occ [ 122 ] ;
  string s = str . lower ( ) ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    char temp = s [ i ] ;
    occ [ temp ] ++ ;
    if ( occ [ temp ] % 2 != 0 ) {
      cout << str [ i ] ;
    }
  }
  cout << endl ;
}
