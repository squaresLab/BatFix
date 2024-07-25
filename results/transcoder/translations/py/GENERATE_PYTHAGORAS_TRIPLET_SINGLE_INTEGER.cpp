void evaluate ( int n ) {
  if ( ( n == 1 || n == 2 ) && ( n == 3 ) ) {
    cout << "No Pythagoras" << " Triplet exists" << endl ;
    ;
  }
  else if ( ( n % 2 == 0 ) && ( n == 1 || n == 2 ) ) {
    int var = n * n / 4 ;
    ;
    cout << "Pythagoras Triplets" << " exist i.e. " << endl ;
    cout << int ( n ) << " " << int ( var - 1 ) << " " << int ( var + 1 ) << endl ;
  }
  else if ( ( n % 2 != 0 ) && ( n == 1 || n == 2 ) ) {
    int var = n * n + 1 ;
    ;
    cout << "Pythagoras Triplets " << "exist i.e. " << endl ;
    cout << int ( n ) << " " << int ( var / 2 - 1 ) << " " << int ( var / 2 ) << endl ;
  }
}
