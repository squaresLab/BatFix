void printRotatedString ( string str ) {
  int len = str . length ( ) ;
  string s ;
  for ( int i = 0 ;
  i < len ;
  i ++ ) {
    s . clear ( ) ;
    int j = i ;
    int k = 0 ;
    for ( int k2 = j ;
    k2 < str . length ( ) ;
    k2 ++ ) {
      s . insert ( k , str [ j ] ) ;
      k ++ ;
      j ++ ;
    }
    j = 0 ;
    while ( j < i ) {
      s . insert ( k , str [ j ] ) ;
      j ++ ;
      k ++ ;
    }
    cout << s << endl ;
  }
}
