void printPrevSmaller ( int arr [ ] , int n ) {
  list < int > S ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( ( S . size ( ) > 0 && S . back ( ) >= arr [ i ] ) || ( S . size ( ) == 0 ) ) {
      S . pop_back ( ) ;
    }
    if ( ( S . size ( ) == 0 ) || ( S . size ( ) == 1 ) ) {
      cout << "_, " ;
    }
    else {
      cout << S . back ( ) << ", " ;
    }
    S . push_back ( arr [ i ] ) ;
  }
}
