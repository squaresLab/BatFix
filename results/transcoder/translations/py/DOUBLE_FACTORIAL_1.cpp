int doublefactorial ( int n ) {
  int res = 1 ;
  ;
  for ( int i = n ;
  i >= 0 ;
  i -- ) {
    if ( ( i == 0 || i == 1 ) && ( i != 0 ) ) return res ;
    else res *= i ;
  }
  return res ;
}
