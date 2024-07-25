void findTriplets ( int x ) {
  vector < int > fact ;
  ;
  set < int > factors ;
  for ( int i = 2 ;
  i <= ( int ) sqrt ( x ) ;
  i ++ ) {
    if ( ( x % i ) == 0 ) {
      fact . push_back ( i ) ;
      ;
      if ( ( x / i ) != i ) fact . push_back ( x / i ) ;
      factors . insert ( i ) ;
      factors . insert ( x / i ) ;
    }
  }
  bool found = false ;
  int k = fact . size ( ) ;
  foriinrange ( k ) {
    int a = fact [ i ] ;
    forjinrange ( k ) {
      int b = fact [ j ] ;
      if ( ( ( a != b ) && ( x % ( a * b ) == 0 ) && ( x / ( a * b ) != a ) && ( x / ( a * b ) != b ) && ( x / ( a * b ) != 1 ) ) ) {
        cout << a << " " << b << " " << x / ( a * b ) << endl ;
        found = true ;
        break ;
      }
    }
    if ( ( found ) && ( ( x % ( a * b ) == 0 ) && ( x / ( a * b ) != 0 ) && ( x / ( a * b ) != 1 ) ) ) {
      cout << a << " " << b << " " << x / ( a * b ) << endl ;
      found = true ;
      break ;
    }
  }
  if ( ( notfound ) && ( ( x % ( a * b ) == 0 ) && ( x / ( a * b ) != 0 ) && ( x / ( a * b ) != 0 ) ) ) {
    cout << "-1" << endl ;
  }
}
