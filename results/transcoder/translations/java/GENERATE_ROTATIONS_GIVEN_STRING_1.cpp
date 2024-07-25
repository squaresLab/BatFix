void printRotatedString ( string str ) {
  int n = str . size ( ) ;
  string s = str ;
  s . resize ( n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j != n ;
    j ++ ) {
      cout << s [ i + j ] ;
    }
    cout << endl ;
  }
}
