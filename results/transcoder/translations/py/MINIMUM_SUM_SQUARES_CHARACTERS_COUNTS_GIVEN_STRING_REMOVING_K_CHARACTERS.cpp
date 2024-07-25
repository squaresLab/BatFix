public : int minStringValue ( string str , int k ) {
  int l = str . length ( ) ;
  if ( ( k >= l ) && ( k <= MAX_CHAR ) ) return 0 ;
  vector < int > frequency ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i <= l ;
  i ++ ) frequency [ ( unsigned char ) str [ i ] - 97 ] ++ ;
  priority_queue < int , vector < int > , greater < int > , compareInteger > q ;
  for ( int i = 0 ;
  i <= MAX_CHAR ;
  i ++ ) q . push ( - frequency [ i ] ) ;
  while ( ( k > 0 ) && ( q . top ( ) == q . top ( ) ) ) {
    int temp = q . top ( ) ;
    temp = temp + 1 ;
    q . pop ( ) ;
    k = k - 1 ;
  }
  int result = 0 ;
  ;
  while ( ! q . empty ( ) ) {
    int temp = q . top ( ) ;
    temp = temp * ( - 1 ) ;
    result += temp * temp ;
  }
  return result ;
}
