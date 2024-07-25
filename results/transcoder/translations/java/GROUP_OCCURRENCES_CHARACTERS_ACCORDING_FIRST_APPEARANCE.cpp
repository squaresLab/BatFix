void printGrouped ( string str ) {
  int n = str . length ( ) ;
  int count [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    count [ str [ i ] - 'a' ] ++ ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( count [ str [ i ] - 'a' ] != 0 ) {
      cout << str [ i ] ;
      count [ str [ i ] - 'a' ] -- ;
    }
    count [ str [ i ] - 'a' ] = 0 ;
  }
}
