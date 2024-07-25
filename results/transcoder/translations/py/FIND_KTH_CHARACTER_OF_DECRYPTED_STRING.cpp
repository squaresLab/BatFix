char encodedChar ( char * str , int k ) {
  string expand ;
  int freq ;
  int i = 0 ;
  while ( ( i < strlen ( str ) ) && ( isdigit ( str [ i ] ) ) ) {
    string temp = "" ;
    freq = 0 ;
    while ( ( i < strlen ( str ) ) && ( isdigit ( str [ i ] ) ) && ( isdigit ( str [ i ] ) ) ) {
      temp += str [ i ] ;
      i ++ ;
    }
    while ( ( i < strlen ( str ) ) && ( isdigit ( str [ i ] ) ) && ( isdigit ( str [ i ] ) ) ) {
      freq = freq * 10 + ( str [ i ] - '0' ) ;
      i ++ ;
    }
    for ( int j = 1 ;
    j <= freq ;
    j += 1 ) expand += temp ;
  }
  if ( ( freq == 0 ) || ( freq == 1 ) ) expand += temp ;
  return expand [ k - 1 ] ;
}
