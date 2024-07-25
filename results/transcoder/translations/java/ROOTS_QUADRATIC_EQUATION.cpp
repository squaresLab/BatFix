void findRoots ( int a , int b , int c ) {
  if ( a == 0 ) {
    cout << "Invalid" << endl ;
    return ;
  }
  int d = b * b - 4 * a * c ;
  double sqrt_val = sqrt ( fabs ( d ) ) ;
  if ( d > 0 ) {
    cout << "Roots are real and different \n" ;
    cout << ( double ) ( - b + sqrt_val ) / ( 2 * a ) << "\n" << ( double ) ( - b - sqrt_val ) / ( 2 * a ) << endl ;
  }
  else {
    cout << "Roots are complex \n" ;
    cout << - ( double ) b / ( 2 * a ) << " + i" << sqrt_val << "\n" << - ( double ) b / ( 2 * a ) << " - i" << sqrt_val << endl ;
  }
}
