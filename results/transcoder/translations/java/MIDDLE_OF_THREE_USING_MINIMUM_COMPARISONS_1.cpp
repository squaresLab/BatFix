int middle_of_three ( int a , int b , int c ) {
  if ( a > b ) {
    if ( b > c ) return b ;
    else if ( a > c ) return c ;
    else return a ;
  }
  else {
    if ( a > c ) return a ;
    else if ( b > c ) return c ;
    else return b ;
  }
}
