int findSum ( string str1 ) {
  string temp = "" ;
  int Sum = 0 ;
  for ( int i = 0 ;
  i < str1 . length ( ) ;
  i ++ ) {
    char ch = str1 [ i ] ;
    if ( ( ch = tolower ( ch ) ) == ' ' ) temp += ch ;
    else {
      Sum += atoi ( temp . c_str ( ) ) ;
      temp = "0" ;
    }
  }
  return Sum + atoi ( temp . c_str ( ) ) ;
}
