void checkCollision ( int a , int b , int c , int x , int y , int radius ) {
  double dist = ( fabs ( a * x + b * y + c ) ) / sqrt ( a * a + b * b ) ;
  if ( radius == dist ) {
    cout << "Touch" << endl ;
  }
  else if ( radius > dist ) {
    cout << "Intersect" << endl ;
  }
  else {
    cout << "Outside" << endl ;
  }
}
