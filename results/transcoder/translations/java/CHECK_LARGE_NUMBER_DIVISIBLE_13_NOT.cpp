bool checkDivisibility ( string num ) {
  int length = num . length ( ) ;
  if ( length == 1 && num [ 0 ] == '0' ) return true ;
  if ( length % 3 == 1 ) {
    num += "00" ;
    length += 2 ;
  }
  else if ( length % 3 == 2 ) {
    num += "0" ;
    length += 1 ;
  }
  int sum = 0 , p = 1 ;
  for ( int i = length - 1 ;
  i >= 0 ;
  i -- ) {
    int group = 0 ;
    group += num [ i -- ] - '0' ;
    group += ( num [ i -- ] - '0' ) * 10 ;
    group += ( num [ i ] - '0' ) * 100 ;
    sum = sum + group * p ;
    p *= ( - 1 ) ;
  }
  sum = abs ( sum ) ;
  return ( sum % 13 == 0 ) ;
}
