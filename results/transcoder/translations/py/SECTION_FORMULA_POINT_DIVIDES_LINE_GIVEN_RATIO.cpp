void section ( int x1 , int x2 , int y1 , int y2 , int m , int n ) {
  float x = ( float ) ( ( n * x1 ) + ( m * x2 ) ) / ( m + n ) ;
  float y = ( float ) ( ( n * y1 ) + ( m * y2 ) ) / ( m + n ) ;
  cout << x << " " << y << endl ;
}
