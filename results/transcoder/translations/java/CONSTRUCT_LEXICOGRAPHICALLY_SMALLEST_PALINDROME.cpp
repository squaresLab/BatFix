string constructPalin ( char * str , int len ) {
  int i = 0 , j = len - 1 ;
  for ( ;
  i < j ;
  i ++ , j -- ) {
    if ( str [ i ] == str [ j ] && str [ i ] != '*' ) continue ;
    else if ( str [ i ] == str [ j ] && str [ i ] == '*' ) {
      str [ i ] = 'a' ;
      str [ j ] = 'a' ;
      continue ;
    }
    else if ( str [ i ] == '*' ) {
      str [ i ] = str [ j ] ;
      continue ;
    }
    else if ( str [ j ] == '*' ) {
      str [ j ] = str [ i ] ;
      continue ;
    }
    cout << "Not Possible" << endl ;
    return "" ;
  }
  return string ( str ) ;
}
