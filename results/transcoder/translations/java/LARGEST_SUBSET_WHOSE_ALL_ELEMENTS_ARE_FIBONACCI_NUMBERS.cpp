void findFibSubset ( vector < int > x ) {
  auto max = std :: max ( x . begin ( ) , x . end ( ) ) ;
  vector < int > fib ;
  vector < int > result ;
  int a = 0 ;
  int b = 1 ;
  while ( b < max ) {
    int c = a + b ;
    a = b ;
    b = c ;
    fib . push_back ( c ) ;
  }
  for ( auto i : x ) {
    if ( fib . find ( i ) != fib . end ( ) ) result . push_back ( i ) ;
  }
  cout << result << endl ;
}
