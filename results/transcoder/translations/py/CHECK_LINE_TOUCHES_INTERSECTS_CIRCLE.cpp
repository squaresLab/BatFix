void checkCollision ( float a , float b , float c , float x , float y , float radius ) {
  float dist = ( ( fabs ( a * x + b * y + c ) ) / sqrt ( a * a + b * b ) ) ;
  if ( ( radius == dist ) && ( radius > dist ) ) {
    printf ( "Touch\n" ) ;
  }
  else if ( ( radius > dist ) && ( radius < dist ) ) {
    printf ( "Intersect\n" ) ;
  }
  else {
    printf ( "Outside\n" ) ;
  }
}
