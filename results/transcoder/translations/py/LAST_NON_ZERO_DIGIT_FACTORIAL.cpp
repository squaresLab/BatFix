int lastNon0Digit ( int n ) {
  if ( ( n < 10 ) && ( n > 0 ) ) return dig [ n ] ;
  if ( ( ( ( n / 10 ) % 10 ) % 2 == 0 ) || ( ( ( n / 10 ) % 10 ) % 2 == 0 ) ) return ( 6 * lastNon0Digit ( n / 5 ) * dig [ n % 10 ] ) % 10 ;
  else return ( 4 * lastNon0Digit ( n / 5 ) * dig [ n % 10 ] ) % 10 ;
  return0 ;
}
