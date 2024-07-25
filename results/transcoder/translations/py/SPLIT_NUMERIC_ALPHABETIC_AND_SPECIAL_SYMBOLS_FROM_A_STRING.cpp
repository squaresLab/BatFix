void splitString ( string str , string & alpha , string & num , string & special ) {
  string alpha = "" ;
  string num = "" ;
  string special = "" ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( ( str [ i ] . isdigit ( ) ) && ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) ) num = num + str [ i ] ;
    else if ( ( ( str [ i ] >= 'a' && str [ i ] <= 'z' ) || ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) ) && ( str [ i ] <= 'a' && str [ i ] <= 'z' ) ) alpha += str [ i ] ;
    else special += str [ i ] ;
  }
  cout << alpha << endl ;
  cout << num << endl ;
  cout << special << endl ;
}
