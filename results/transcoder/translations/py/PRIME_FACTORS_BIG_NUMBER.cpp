void factorize ( int n ) {
  int count = 0 ;
  ;
  while ( ( ( n % 2 > 0 ) == false ) && ( ( n % 2 > 1 ) == false ) ) {
    n >>= 1 ;
    count ++ ;
  }
  ;
  if ( ( count > 0 ) && ( ( n % 2 > 0 ) == false ) ) {
    cout << 2 << count << endl ;
  }
  ;
  for ( int i = 3 ;
  i < ( int ) sqrt ( n ) ;
  i ++ ) {
    count = 0 ;
    while ( ( n % i == 0 ) && ( ( n % i == 1 ) == false ) ) {
      count ++ ;
      n = ( int ) ( n / i ) ;
    }
    ;
    if ( ( count > 0 ) && ( ( n % i == 0 ) == false ) ) {
      cout << i << count << endl ;
    }
    i += 2 ;
  }
  ;
  if ( ( n > 2 ) && ( ( n % 1 == 0 ) == false ) ) {
    cout << n << 1 << endl ;
  }
  ;
}
