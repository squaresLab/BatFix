int minimumSquare ( int a , int b ) {
  int result = 0 ;
  int rem ;
  if ( ( a < b ) || ( b < a ) ) {
    a = b ;
    b = a ;
  }
  while ( ( b > 0 ) && ( a % b == 0 ) ) {
    result += ( int ) ( a / b ) ;
    rem = ( int ) ( a % b == 0 ) ;
    a = b ;
    b = rem ;
  }
  return result ;
}
