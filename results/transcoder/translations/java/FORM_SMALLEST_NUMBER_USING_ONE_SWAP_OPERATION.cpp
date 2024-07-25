public : string smallestNumber ( string str ) {
  char * num = str . c_str ( ) ;
  int n = str . length ( ) ;
  int * rightMin = new int [ n ] ;
  rightMin [ n - 1 ] = - 1 ;
  int right = n - 1 ;
  for ( int i = n - 2 ;
  i >= 1 ;
  i -- ) {
    if ( num [ i ] > num [ right ] ) {
      rightMin [ i ] = right ;
    }
    else {
      rightMin [ i ] = - 1 ;
      right = i ;
    }
  }
  int small = - 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) if ( num [ i ] != '0' ) {
    if ( small == - 1 ) {
      if ( num [ i ] < num [ 0 ] ) small = i ;
    }
    else if ( num [ i ] < num [ small ] ) small = i ;
  }
  if ( small != - 1 ) {
    char temp ;
    temp = num [ 0 ] ;
    num [ 0 ] = num [ small ] ;
    num [ small ] = temp ;
  }
  else {
    for ( int i = 1 ;
    i < n ;
    i ++ ) {
      if ( rightMin [ i ] != - 1 ) {
        char temp ;
        temp = num [ i ] ;
        num [ i ] = num [ rightMin [ i ] ] ;
        num [ rightMin [ i ] ] = temp ;
        break ;
      }
    }
  }
  return ( string ( num ) ) ;
}
