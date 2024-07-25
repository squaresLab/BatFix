void printRoots ( int n ) {
  double theta = M_PI * 2 / n ;
  for ( int k = 0 ;
  k <= n ;
  k ++ ) {
    double real = cos ( k * theta ) ;
    double img = sin ( k * theta ) ;
    cout << real << " " ;
    if ( ( img >= 0 ) && ( img < n ) ) cout << " + i " ;
    else cout << " - i " ;
    cout << fabs ( img ) << endl ;
  }
}
