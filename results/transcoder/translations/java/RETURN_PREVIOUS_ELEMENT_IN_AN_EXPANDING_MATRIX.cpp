string & find_left ( string & str ) {
  string :: size_type n = str . size ( ) ;
  while ( n > 0 ) {
    n -- ;
    if ( str [ n ] == 'd' ) {
      str . erase ( n ) ;
      break ;
    }
    if ( str [ n ] == 'b' ) {
      str . erase ( n ) ;
      break ;
    }
    if ( str [ n ] == 'a' ) {
      str . erase ( n ) ;
    }
    else if ( str [ n ] == 'c' ) {
      str . erase ( n ) ;
    }
  }
  return str ;
}
