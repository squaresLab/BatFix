public : int maxDP ( int n ) {
  vector < int > res ;
  res . push_back ( 0 ) ;
  res . push_back ( 1 ) ;
  int i = 2 ;
  while ( i < n + 1 ) {
    res . push_back ( max ( i , ( res [ ( int ) ( i / 2 ) ] + res [ ( int ) ( i / 3 ) ] + res [ ( int ) ( i / 4 ) ] + res [ ( int ) ( i / 5 ) ] ) ) ) ;
    i = i + 1 ;
  }
  return res [ n ] ;
}
