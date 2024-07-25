int last_non0_digit ( int n ) {
  if ( n < 10 ) return dig [ n ] ;
  if ( ( ( n / 10 ) % 10 ) % 2 == 0 ) return ( 6 * last_non0_digit ( n / 5 ) * dig [ n % 10 ] ) % 10 ;
  else return ( 4 * last_non0_digit ( n / 5 ) * dig [ n % 10 ] ) % 10 ;
}
