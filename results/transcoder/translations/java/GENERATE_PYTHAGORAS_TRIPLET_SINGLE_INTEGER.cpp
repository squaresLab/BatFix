void evaluate ( int n ) {
  if ( n == 1 || n == 2 ) {
    cout << "No Pythagoras " << "Triplet exists" << endl ;
  }
  else if ( n % 2 == 0 ) {
    int var = 1 * n * n / 4 ;
    cout << "Pythagoras Triplets " << "exist i.e. " << n << " " << var - 1 << " " << var + 1 << " " ;
  }
  else if ( n % 2 != 0 ) {
    int var = 1 * n * n + 1 ;
    cout << "Pythagoras Triplets " << "exist i.e. " << n << " " << var / 2 - 1 << " " << var / 2 << " " ;
  }
}
