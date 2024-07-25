void common_characters ( char str [ ] , int n ) {
  bool prim [ MAX_CHAR ] ;
  memset ( prim , 0 , sizeof ( prim ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    bool sec [ MAX_CHAR ] ;
    memset ( sec , 0 , sizeof ( sec ) ) ;
    for ( int j = 0 ;
    j < str [ i ] ;
    j ++ ) {
      if ( prim [ str [ i ] - 'a' ] ) {
        sec [ str [ i ] - 'a' ] = true ;
      }
    }
    memset ( prim , 0 , sizeof ( prim ) ) ;
  }
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) if ( prim [ i ] ) {
    cout << char ( i + 97 ) ;
    cout << " " ;
  }
}
