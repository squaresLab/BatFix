string firstLetterWord ( string str ) {
  string result = "" ;
  bool v = true ;
  for ( int i = 0 ;
  i < str . size ( ) ;
  i ++ ) {
    if ( ( str [ i ] == ' ' ) || ( str [ i ] == '\t' ) ) v = true ;
    else if ( ( str [ i ] != ' ' && v == true ) || ( str [ i ] == '\t' ) ) {
      result += ( str [ i ] ) ;
      v = false ;
    }
  }
  return result ;
}
