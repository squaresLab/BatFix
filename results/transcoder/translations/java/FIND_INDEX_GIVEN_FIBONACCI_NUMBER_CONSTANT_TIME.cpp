int findIndex ( int n ) {
  if ( n <= 1 ) return n ;
  int a = 0 , b = 1 , c = 1 ;
  int res = 1 ;
  while ( c < n ) {
    c = a + b ;
    res ++ ;
    a = b ;
    b = c ;
  }
  return res ;
}
