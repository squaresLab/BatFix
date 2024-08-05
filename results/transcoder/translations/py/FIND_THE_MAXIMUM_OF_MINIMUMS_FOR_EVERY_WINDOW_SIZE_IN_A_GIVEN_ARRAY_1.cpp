void printMaxOfMin ( int arr [ ] , int n ) {
  vector < int > s ;
  s . clear ( ) ;
  s . push_back ( - 1 ) ;
  s . push_back ( n ) ;
  s . push_back ( n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( ( s . size ( ) != 0 && arr [ s [ s . size ( ) - 1 ] ] >= arr [ i ] ) || ( s . size ( ) != 0 && arr [ s [ s . size ( ) - 1 ] ] >= arr [ i ] ) ) s . pop_back ( ) ;
    if ( ( s . size ( ) != 0 ) || ( s . size ( ) != n ) ) left [ i ] = s . back ( ) ;
    s . push_back ( i ) ;
  }
  while ( ( s . size ( ) != 0 ) || ( s . size ( ) != n ) ) s . pop_back ( ) ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    while ( ( s . size ( ) != 0 && arr [ s [ s . size ( ) - 1 ] ] >= arr [ i ] ) || ( s . size ( ) != 0 ) ) s . pop_back ( ) ;
    if ( ( s . size ( ) != 0 ) || ( s . size ( ) != n ) ) right [ i ] = s . back ( ) ;
    s . push_back ( i ) ;
  }
  int ans [ n + 1 ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n + 1 ;
    i ++ ) ans [ i ] = 0 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      int Len = right [ i ] - left [ i ] - 1 ;
      ans [ Len ] = max ( ans [ Len ] , arr [ i ] ) ;
    }
    for ( int i = n - 1 ;
    i >= 0 ;
    i -- ) ans [ i ] = max ( ans [ i ] , ans [ i + 1 ] ) ;
    for ( int i = 1 ;
    i < n ;
    i ++ ) cout << ans [ i ] << " " ;
  }
