int findSum ( string str ) {
  string temp = "" ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    char ch = str [ i ] ;
    if ( isdigit ( ch ) ) {
      temp += ch ;
    }
    else {
      sum += atoi ( temp . c_str ( ) ) ;
      temp . clear ( ) ;
    }
  }
  return sum + atoi ( temp . c_str ( ) ) ;
}
