bool isDvisibleBy12 ( string num ) {
  if ( ( num . length ( ) >= 3 ) && ( num . length ( ) % 2 == 0 ) ) {
    int d1 = atoi ( num . c_str ( ) + num . length ( ) - 1 ) ;
    ;
    if ( ( d1 % 2 != 0 ) || ( d1 % 4 != 0 ) ) return false ;
    int d2 = atoi ( num . c_str ( ) + num . length ( ) - 2 ) ;
    int sum = 0 ;
    for ( int i = 0 ;
    i != num . length ( ) ;
    i ++ ) sum += atoi ( num . c_str ( ) + i ) ;
    return ( sum % 3 == 0 && ( d2 * 10 + d1 ) % 4 == 0 ) ;
  }
  else {
    int number = atoi ( num . c_str ( ) ) ;
    return ( number % 12 == 0 ) ;
  }
}
