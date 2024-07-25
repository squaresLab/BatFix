void printDuo ( string str ) {
  int countChar [ MAX_CHAR ] ;
  int n = str . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) countChar [ str [ i ] - 'a' ] ++ ;
  string str1 = "" , str2 = "" ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( countChar [ i ] > 1 ) str2 = str2 + char ( i + 'a' ) ;
    else if ( countChar [ i ] == 1 ) str1 = str1 + char ( i + 'a' ) ;
  }
  cout << "String with characters occurring " << "once:\n" ;
  cout << str1 << "\n" ;
  cout << "String with characters occurring " << "multiple times:\n" ;
  cout << str2 << "\n" ;
  cout << "" << endl ;
}
