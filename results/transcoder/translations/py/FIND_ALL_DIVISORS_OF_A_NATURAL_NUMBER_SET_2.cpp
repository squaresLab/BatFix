void printDivisors ( int n ) {
  vector < int > vec ;
  for ( int i = 1 ;
  i <= ( int ) sqrt ( n ) ;
  i ++ ) {
    if ( ( n % i ) == 0 ) {
      if ( ( n / i ) == i ) cout << i << " " ;
      else {
        cout << i << " " ;
        vec . push_back ( ( int ) ( n / i ) ) ;
      }
    }
  }
  for ( int i = 0 ;
  i < vec . size ( ) ;
  i ++ ) cout << vec [ i ] << " " ;
}
