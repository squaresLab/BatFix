void printRotatedString ( string string ) {
  int n = string . size ( ) ;
  string temp = string + string ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      cout << temp [ i + j ] << " " ;
    }
    cout << endl ;
  }
}
