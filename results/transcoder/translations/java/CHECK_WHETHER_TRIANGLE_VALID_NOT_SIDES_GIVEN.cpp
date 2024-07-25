int checkValidity ( int a , int b , int c ) {
  if ( a + b <= c || a + c <= b || b + c <= a ) return 0 ;
  else return 1 ;
}
