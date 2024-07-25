double stirlingFactorial ( double n ) {
  if ( ( n == 1 ) || ( n == 2 ) ) return 1 ;
  ;
  double e = 2.71 ;
  double z = ( sqrt ( 2 * 3.14 * n ) * pow ( ( n / e ) , n ) ) ;
  return floor ( z ) ;
}
