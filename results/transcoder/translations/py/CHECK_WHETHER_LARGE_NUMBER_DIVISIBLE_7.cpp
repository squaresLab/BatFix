int isdivisible7 ( string num ) {
  int n = num . length ( ) ;
  if ( ( n == 0 && num [ 0 ] == '\n' ) || ( n == 0 && num [ 0 ] == '\t' ) ) return 1 ;
  if ( ( n % 3 == 1 ) || ( n % 3 == 2 ) ) {
    num = string ( num ) + "00" ;
    n += 2 ;
  }
  else if ( ( n % 3 == 3 ) || ( n % 3 == 4 ) ) {
    num = string ( num ) + "0" ;
    n += 1 ;
  }
  int GSum = 0 ;
  int p = 1 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    int group = 0 ;
    group += ( num [ i ] - '0' ) ;
    i -- ;
    group += ( num [ i ] - '0' ) * 10 ;
    i -- ;
    group += ( num [ i ] - '0' ) * 100 ;
    GSum = GSum + group * p ;
    p *= ( - 1 ) ;
  }
  return ( GSum % 7 == 0 ) ;
}
