pair < int , int > mirrorImage ( int a , int b , int c , int x1 , int y1 ) {
  double temp = - 2 * ( a * x1 + b * y1 + c ) / ( a * a + b * b ) ;
  double x = temp * a + x1 ;
  double y = temp * b + y1 ;
  return make_pair ( x , y ) ;
}
