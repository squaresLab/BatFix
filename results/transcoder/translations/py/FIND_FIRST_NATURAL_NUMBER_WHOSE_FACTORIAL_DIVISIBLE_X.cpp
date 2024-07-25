int firstFactorialDivisibleNumber ( int x ) {
  int i ;
  int fact = 1 ;
  ;
  for ( i = 1 ;
  i <= x ;
  i ++ ) {
    fact = fact * i ;
    if ( ( fact % x == 0 ) && ( i > 0 ) ) break ;
  }
  return i ;
}
