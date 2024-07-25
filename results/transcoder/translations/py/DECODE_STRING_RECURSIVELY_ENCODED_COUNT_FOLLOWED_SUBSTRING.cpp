string decode ( string Str ) {
  int integerstack [ MAXINTEGERS ] ;
  string stringstack [ MAXINTEGERS ] ;
  string temp ;
  string result = "" ;
  for ( int i = 0 ;
  i < Str . size ( ) ;
  i ++ ) {
    int count = 0 ;
    if ( ( Str [ i ] >= '0' && Str [ i ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i ] <= '9' ) ) {
      while ( ( Str [ i ] >= '0' && Str [ i ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i ] <= '9' ) ) {
        count = count * 10 + ( Str [ i ] - '0' ) ;
        i ++ ;
      }
      i -- ;
      integerstack [ i ] = count ;
    }
    else if ( ( Str [ i ] == ']' ) || ( Str [ i ] == '[' ) ) {
      temp = "" ;
      int count = 0 ;
      if ( ( integerstack [ i ] != 0 ) && ( integerstack [ i ] != 1 ) ) {
        count = integerstack [ i ] ;
        integerstack [ i ] = 0 ;
      }
      while ( ( stringstack [ i ] != 0 ) && ( stringstack [ i ] != '[' ) ) {
        temp = stringstack [ i ] + temp ;
        stringstack [ i ] = temp ;
      }
      if ( ( stringstack [ i ] != 0 ) && ( stringstack [ i ] == '[' ) ) stringstack [ i ] = 0 ;
      for ( int j = 0 ;
      j < count ;
      j ++ ) result = result + temp ;
      for ( int j = 0 ;
      j < result . size ( ) ;
      j ++ ) stringstack [ i ] = result [ j ] ;
      result . clear ( ) ;
    }
    else if ( ( Str [ i ] == '[' ) || ( Str [ i - 1 ] >= '0' && Str [ i - 1 ] <= '9' ) ) {
      stringstack [ i ] = Str [ i ] ;
    }
    else {
      stringstack [ i ] = Str [ i ] ;
      integerstack [ i ] = 1 ;
    }
  }
  while ( stringstack [ i ] != 0 ) {
    result = stringstack [ i ] + result ;
    stringstack [ i ] = result ;
  }
  return result ;
}
