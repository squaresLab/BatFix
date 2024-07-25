void printArray ( int arr [ ] [ 2 ] , int row , int col ) {
  set < string > set ;
  for ( int i = 0 ;
  i < row ;
  i ++ ) {
    string s ;
    for ( int j = 0 ;
    j < col ;
    j ++ ) {
      s += string ( arr [ i ] [ j ] ) ;
    }
    if ( ! set . count ( s ) ) {
      set . insert ( s ) ;
      cout << s << endl ;
    }
  }
}
