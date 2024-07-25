int middleOfThree ( int a , int b , int c ) {
  int x = a - b ;
  int y = b - c ;
  int z = a - c ;
  if ( x * y > 0 ) return b ;
  else if ( ( x * z > 0 ) && ( y * z < 0 ) ) return a ;
  else return a ;
}
