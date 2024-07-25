string convert ( string s ) {
  int n = s . size ( ) ;
  string s1 ;
  s1 . reserve ( n ) ;
  int i = 1 ;
  while ( i < n ) {
    if ( ( s [ i ] == ' ' && i <= n ) || ( s [ i ] == '\t' && i <= n ) ) {
      s1 . push_back ( " " + ( s [ i + 1 ] ) . c_str ( ) ) ;
      i = i + 1 ;
    }
    else {
      s1 . push_back ( ( s [ i ] ) . c_str ( ) ) ;
    }
    i = i + 1 ;
  }
  return s1 ;
}
