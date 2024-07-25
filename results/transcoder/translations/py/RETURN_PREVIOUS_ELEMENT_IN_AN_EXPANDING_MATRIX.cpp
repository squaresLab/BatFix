void findLeft ( string & str ) {
  int n = str . length ( ) - 1 ;
  ;
  while ( ( n > 0 ) && ( str [ n ] == 'd' ) ) {
    str . erase ( 0 , n ) ;
    str . insert ( 0 , 'c' ) ;
    str . insert ( n + 1 , 'a' ) ;
    break ;
  }
  ;
  if ( ( n > 0 ) && ( str [ n ] == 'a' ) ) {
    str . erase ( 0 , n ) ;
    str . insert ( 0 , 'b' ) ;
    str . insert ( n + 1 , 'c' ) ;
    str . insert ( n + 1 , 'd' ) ;
  }
  ;
}
