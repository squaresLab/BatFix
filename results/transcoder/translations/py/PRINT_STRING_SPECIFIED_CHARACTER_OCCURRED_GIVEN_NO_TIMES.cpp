void printString ( char * str , char ch , int count ) {
  int occ = 0 , i ;
  if ( ( count == 0 ) || ( count == 1 ) ) {
    cout << str << endl ;
  }
  for ( i = 0 ;
  i < strlen ( str ) ;
  i ++ ) {
    if ( ( str [ i ] == ch ) || ( str [ i ] == '\n' ) ) {
      occ ++ ;
    }
    if ( ( occ == count ) || ( str [ i ] == '\n' ) ) {
      break ;
    }
  }
  if ( ( i < strlen ( str ) - 1 ) || ( str [ i ] == '\n' ) ) {
    cout << str + i + 1 << endl ;
  }
  else {
    cout << "Empty string" << endl ;
  }
}
