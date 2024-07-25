void subset_difference ( int n ) {
  int s = n * ( n + 1 ) / 2 ;
  if ( n % 4 == 0 ) {
    cout << "First subset sum = " << s / 2 << endl ;
    cout << "Second subset sum = " << s / 2 << endl ;
    cout << "Difference = " << 0 << endl ;
  }
  else {
    if ( n % 4 == 1 || n % 4 == 2 ) {
      cout << "First subset sum = " << s / 2 << endl ;
      cout << "Second subset sum = " << ( ( s / 2 ) + 1 ) << endl ;
      cout << "Difference = " << 1 << endl ;
    }
    else {
      cout << "First subset sum = " << s / 2 << endl ;
      cout << "Second subset sum = " << s / 2 << endl ;
      cout << "Difference = " << 0 << endl ;
    }
  }
}
