string convert ( string s ) {
  int n = s . size ( ) ;
  string s1 ;
  s1 . reserve ( n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( s [ i ] == ' ' && i < n ) {
      s1 . push_back ( " " + string ( s [ i + 1 ] ) ) ;
      i ++ ;
    }
    else {
      s1 . push_back ( string ( s [ i ] ) ) ;
    }
  }
  return s1 ;
}
