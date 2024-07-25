void printDuo ( string string ) {
  int countChar [ MAX_CHAR ] ;
  int n = string . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) countChar [ ( unsigned char ) string [ i ] - ( unsigned char ) 'a' ] ++ ;
  string str1 = "" ;
  string str2 = "" ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( ( countChar [ i ] > 1 ) && ( countChar [ i ] < MAX_CHAR ) ) str2 = str2 + ( char ) ( i + ( char ) 'a' ) ;
    else if ( ( countChar [ i ] == 1 ) && ( countChar [ i ] < MAX_CHAR ) ) str1 = str1 + ( char ) ( i + ( char ) 'a' ) ;
  }
  cout << "String with characters occurring once:" << "\n" << str1 << endl ;
  cout << "String with characters occurring" << "multiple times:" << "\n" << str2 << endl ;
}
