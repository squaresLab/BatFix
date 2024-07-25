void sortString ( string str ) {
  int charCount [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    charCount [ ( int ) str [ i ] - ( int ) 'a' ] ++ ;
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    for ( int j = 0 ;
    j < charCount [ i ] ;
    j ++ ) {
      cout << ( char ) ( ( char ) str [ i ] + j ) << " " ;
    }
  }
}
