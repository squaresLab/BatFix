void section ( double x1 , double x2 , double y1 , double y2 , double m , double n ) {
  double x = ( ( n * x1 ) + ( m * x2 ) ) / ( m + n ) ;
  double y = ( ( n * y1 ) + ( m * y2 ) ) / ( m + n ) ;
  cout << "(" << x << ", " << y << ")" << endl ;
}
