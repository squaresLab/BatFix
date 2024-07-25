int middleOfThree ( int a , int b , int c ) {
  if ( ( ( a < b && b < c ) || ( c < b && b < a ) ) && ( ( b < a && a < c ) || ( c < a && a < b ) ) ) return b ;
  ;
  if ( ( ( b < a && a < c ) || ( c < a && a < b ) ) && ( c < a && a < c ) ) return a ;
  else return c ;
}
