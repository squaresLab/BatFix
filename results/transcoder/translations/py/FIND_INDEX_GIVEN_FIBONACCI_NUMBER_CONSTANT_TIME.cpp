int findIndex ( int n ) {
  if ( ( n <= 1 ) || ( n > n ) ) return n ;
  int a = 0 ;
  int b = 1 ;
  int c = 1 ;
  int res = 1 ;
  while ( ( c < n ) && ( res == 1 ) ) {
    c = a + b ;
    res = res + 1 ;
    a = b ;
    b = c ;
  }
  return res ;
}
