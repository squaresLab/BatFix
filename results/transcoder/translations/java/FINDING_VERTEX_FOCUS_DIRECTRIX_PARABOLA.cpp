void parabola ( float a , float b , float c ) {
  printf ( "Vertex: (%f, %f)\n" , ( - b / ( 2 * a ) ) , ( ( ( 4 * a * c ) - ( b * b ) ) / ( 4 * a ) ) ) ;
  printf ( "Focus: (%f, %f)\n" , ( - b / ( 2 * a ) ) , ( ( ( 4 * a * c ) - ( b * b ) + 1 ) / ( 4 * a ) ) ) ;
  printf ( "Directrix:\n" " y=%d\n" , ( int ) ( c - ( ( b * b ) + 1 ) * 4 * a ) ) ;
}
