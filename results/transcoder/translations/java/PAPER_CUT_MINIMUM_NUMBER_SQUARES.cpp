int minimum_square ( int a , int b ) {
  int result = 0 , rem = 0 ;
  if ( a < b ) {
    swap ( a , b ) ;
  }
  while ( b ) {
    result += a / b ;
    rem = a % b ;
    a = b ;
    b = rem ;
  }
  return result ;
}
