int minStringValue ( string str , int k ) {
  int l = str . length ( ) ;
  if ( k >= l ) return 0 ;
  vector < int > frequency ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i < l ;
  i ++ ) {
    frequency [ str [ i ] - 'a' ] ++ ;
  }
  vector < int > c ( MAX_CHAR , 0 ) ;
  priority_queue < int , vector < int > , greater < int > , compareInteger > q ( c ) ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( frequency [ i ] != 0 ) {
      q . push ( frequency [ i ] ) ;
    }
  }
  while ( k != 0 ) {
    int temp = q . top ( ) ;
    q . pop ( ) ;
    temp = temp - 1 ;
    q . push ( temp ) ;
    k -- ;
  }
  int result = 0 ;
  while ( ! q . empty ( ) ) {
    int temp = q . top ( ) ;
    result += temp * temp ;
    q . pop ( ) ;
  }
  return result ;
}
