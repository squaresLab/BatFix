void sortString ( string str ) {
  int charCount [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) charCount [ str [ i ] - 'a' ] ++ ;
  for ( int i = MAX_CHAR - 1 ;
  i >= 0 ;
  i -- ) {
    for ( int j = 0 ;
    j < charCount [ i ] ;
    j ++ ) cout << ( char ) ( 'a' + i ) << endl ;
  }
}
