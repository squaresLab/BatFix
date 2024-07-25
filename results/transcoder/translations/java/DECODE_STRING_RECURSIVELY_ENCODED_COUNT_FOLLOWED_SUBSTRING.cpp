string decode ( string str ) {
  stack < int > integerstack ;
  stack < char > stringstack ;
  string temp , result ;
  for ( int i = 0 ;
  i < str . size ( ) ;
  i ++ ) {
    int count = 0 ;
    if ( isdigit ( str [ i ] ) ) {
      while ( isdigit ( str [ i ] ) ) {
        count = count * 10 + str [ i ] - '0' ;
        i ++ ;
      }
      i -- ;
      integerstack . push ( count ) ;
    }
    else if ( str [ i ] == ']' ) {
      temp = "" ;
      count = 0 ;
      if ( ! integerstack . empty ( ) ) {
        count = integerstack . top ( ) ;
        integerstack . pop ( ) ;
      }
      while ( ! stringstack . empty ( ) && stringstack . top ( ) != '[' ) {
        temp = stringstack . top ( ) + temp ;
        stringstack . pop ( ) ;
      }
      if ( ! stringstack . empty ( ) && stringstack . top ( ) == '[' ) {
        stringstack . pop ( ) ;
      }
      for ( int j = 0 ;
      j < count ;
      j ++ ) {
        result = result + temp ;
      }
      for ( int j = 0 ;
      j < result . size ( ) ;
      j ++ ) {
        stringstack . push ( result [ j ] ) ;
      }
      result . clear ( ) ;
    }
    else if ( str [ i ] == '[' ) {
      if ( isdigit ( str [ i - 1 ] ) ) {
        stringstack . push ( str [ i ] ) ;
      }
      else {
        stringstack . push ( str [ i ] ) ;
        integerstack . push ( 1 ) ;
      }
    }
    else {
      stringstack . push ( str [ i ] ) ;
    }
  }
  while ( ! stringstack . empty ( ) ) {
    result = stringstack . top ( ) + result ;
    stringstack . pop ( ) ;
  }
  return result ;
}
