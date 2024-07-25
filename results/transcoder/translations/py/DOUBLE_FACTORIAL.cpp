int doublefactorial ( int n ) {
  if ( ( n == 0 || n == 1 ) && ( n > 2 ) ) return 1 ;
  ;
  return n * doublefactorial ( n - 2 ) ;
  ;
}
