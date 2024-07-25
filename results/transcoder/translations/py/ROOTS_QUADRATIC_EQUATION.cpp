int findRoots ( int a , int b , int c ) {
  if ( a == 0 ) {
    cout << "Invalid" << endl ;
    return - 1 ;
  }
  double d = b * b - 4 * a * c ;
  double sqrt_val = sqrt ( fabs ( d ) ) ;
  if ( d > 0 ) {
    cout << "Roots are real and different " << endl ;
    cout << ( - b + sqrt_val ) / ( 2 * a ) << endl ;
    cout << ( - b - sqrt_val ) / ( 2 * a ) << endl ;
  }
  else if ( d == 0 ) {
    cout << "Roots are real and same" << endl ;
    cout << - b / ( 2 * a ) << endl ;
  }
  else {
    cout << "Roots are complex" << endl ;
    cout << - b / ( 2 * a ) << " + i" << sqrt_val << endl ;
    cout << - b / ( 2 * a ) << " - i" << sqrt_val << endl ;
  }
  return 0 ;
}
