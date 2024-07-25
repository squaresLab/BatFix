void printOtherSides ( int n ) {
  if ( n % 2 != 0 ) {
    if ( n == 1 ) {
      cout << "-1" << endl ;
    }
    else {
      int b = ( n * n - 1 ) / 2 ;
      int c = ( n * n + 1 ) / 2 ;
      cout << "b = " << b << ", c = " << c << endl ;
    }
  }
  else {
    if ( n == 2 ) {
      cout << "-1" << endl ;
    }
    else {
      int b = n * n / 4 - 1 ;
      int c = n * n / 4 + 1 ;
      cout << "b = " << b << ", c = " << c << endl ;
    }
  }
}
