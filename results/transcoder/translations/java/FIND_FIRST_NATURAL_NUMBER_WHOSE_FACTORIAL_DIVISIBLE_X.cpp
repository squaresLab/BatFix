int firstFactorialDivisibleNumber ( int x ) {
  int i = 1 ;
  int fact = 1 ;
  for ( i = 1 ;
  i < x ;
  i ++ ) {
    fact = fact * i ;
    if ( fact % x == 0 ) break ;
  }
  return i ;
}
