void findTriplets ( int x ) {
  Vector < int > fact ;
  HashSet < int > factors ;
  for ( int i = 2 ;
  i <= sqrt ( x ) ;
  i ++ ) {
    if ( x % i == 0 ) {
      fact . add ( i ) ;
      if ( x / i != i ) fact . add ( x / i ) ;
      factors . add ( i ) ;
      factors . add ( x / i ) ;
    }
  }
  bool found = false ;
  int k = fact . size ( ) ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    int a = fact [ i ] ;
    for ( int j = 0 ;
    j < k ;
    j ++ ) {
      int b = fact [ j ] ;
      if ( ( a != b ) && ( x % ( a * b ) == 0 ) && ( x / ( a * b ) != a ) && ( x / ( a * b ) != b ) && ( x / ( a * b ) != 1 ) ) {
        cout << a << " " << b << " " << ( x / ( a * b ) ) << endl ;
        found = true ;
        break ;
      }
    }
    if ( found ) break ;
  }
  if ( ! found ) cout << "-1" << endl ;
}
