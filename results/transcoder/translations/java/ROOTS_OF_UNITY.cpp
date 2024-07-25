void printRoots ( int n ) {
  double theta = 3.14 * 2 / n ;
  for ( int k = 0 ;
  k < n ;
  k ++ ) {
    double real = cos ( k * theta ) ;
    double img = sin ( k * theta ) ;
    cout << real << endl ;
    if ( img >= 0 ) {
      cout << " + i " ;
    }
    else {
      cout << " - i " ;
    }
    cout << fabs ( img ) << endl ;
  }
}
