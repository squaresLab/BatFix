string simplify ( string str ) {
  int len = str . length ( ) ;
  char res [ len ] ;
  int index = 0 , i = 0 ;
  stack < int > s ;
  s . push ( 0 ) ;
  while ( i < len ) {
    if ( str [ i ] == '+' ) {
      if ( s . top ( ) == 1 ) {
        res [ index ++ ] = '-' ;
      }
      if ( s . top ( ) == 0 ) {
        res [ index ++ ] = '+' ;
      }
    }
    else if ( str [ i ] == '-' ) {
      if ( s . top ( ) == 1 ) {
        res [ index ++ ] = '+' ;
      }
      else if ( s . top ( ) == 0 ) {
        res [ index ++ ] = '-' ;
      }
    }
    else if ( str [ i ] == '(' && i > 0 ) {
      if ( str [ i - 1 ] == '-' ) {
        int x = ( s . top ( ) == 1 ) ? 0 : 1 ;
        s . push ( x ) ;
      }
      else if ( str [ i - 1 ] == '+' ) {
        s . push ( s . top ( ) ) ;
      }
    }
    else if ( str [ i ] == ')' ) {
      s . pop ( ) ;
    }
    else {
      res [ index ++ ] = str [ i ] ;
    }
    i ++ ;
  }
  return string ( res ) ;
}
