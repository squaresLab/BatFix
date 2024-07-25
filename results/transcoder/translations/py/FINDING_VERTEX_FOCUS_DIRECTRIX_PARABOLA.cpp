void parabola ( int a , int b , int c ) {
  cout << "Vertex: (" << ( - b / ( 2 * a ) ) << ", " << ( ( ( 4 * a * c ) - ( b * b ) ) / ( 4 * a ) ) << ")" << endl ;
  cout << "Focus: (" << ( - b / ( 2 * a ) ) << ", " << ( ( ( 4 * a * c ) - ( b * b ) + 1 ) / ( 4 * a ) ) << ")" << endl ;
  cout << "Directrix: y=" << c - ( ( b * b ) + 1 ) * 4 * a << endl ;
}
