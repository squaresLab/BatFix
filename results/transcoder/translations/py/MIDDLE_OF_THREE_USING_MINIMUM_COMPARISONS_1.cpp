int middleOfThree ( int a , int b , int c ) {
  if ( a > b ) {
    if ( ( b > c ) && ( a > c ) ) return b ;
    else if ( ( a > c ) && ( b > c ) ) return c ;
    else return a ;
  }
  else {
    if ( ( a > c ) && ( b > c ) ) return a ;
    else if ( ( b > c ) && ( a > c ) ) return c ;
    else return b ;
  }
}
