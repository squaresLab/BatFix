public : vector < string > simplify ( string Str ) {
  int Len = Str . length ( ) ;
  vector < string > res ( Len , string ( ) ) ;
  int index = 0 ;
  int i = 0 ;
  vector < int > s ;
  s . push_back ( 0 ) ;
  while ( ( i < Len ) && ( i > 0 ) ) {
    if ( ( Str [ i ] == '+' ) || ( Str [ i ] == '-' ) ) {
      if ( ( s [ s . size ( ) - 1 ] == 1 ) || ( s [ s . size ( ) - 1 ] == 0 ) ) {
        res [ index ] = '-' ;
        index ++ ;
      }
      if ( ( s [ s . size ( ) - 1 ] == 0 ) || ( s [ s . size ( ) - 1 ] == 1 ) ) {
        res [ index ] = '+' ;
        index ++ ;
      }
    }
    else if ( ( Str [ i ] == '-' ) || ( Str [ i ] == '+' ) ) {
      if ( ( s [ s . size ( ) - 1 ] == 1 ) || ( s [ s . size ( ) - 1 ] == 0 ) ) {
        res [ index ] = '+' ;
        index ++ ;
      }
      else if ( ( s [ s . size ( ) - 1 ] == 0 ) || ( s [ s . size ( ) - 1 ] == 1 ) ) {
        res [ index ] = '-' ;
        index ++ ;
      }
    }
    else if ( ( Str [ i ] == ')' ) ) {
      s . pop_back ( ) ;
    }
    else {
      res [ index ] = Str [ i ] ;
      index ++ ;
    }
    i ++ ;
  }
  return res ;
}
