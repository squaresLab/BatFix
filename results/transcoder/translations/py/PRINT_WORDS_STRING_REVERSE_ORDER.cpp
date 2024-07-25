public : string wordReverse ( string str ) {
  int i = str . size ( ) - 1 ;
  int start = end = i + 1 ;
  string result ;
  while ( i >= 0 ) {
    if ( str [ i ] == ' ' ) {
      start = i + 1 ;
      while ( start != end ) {
        result += str [ start ] ;
        start ++ ;
      }
      result += ' ' ;
      end = i ;
    }
    i -- ;
  }
  start = 0 ;
  while ( start != end ) {
    result += str [ start ] ;
    start ++ ;
  }
  return result ;
}
