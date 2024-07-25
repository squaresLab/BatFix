void factorize ( long long n ) {
  int count = 0 ;
  while ( ! ( n % 2 ) ) {
    n >>= 1 ;
    count ++ ;
  }
  if ( count ) cout << "2" << " " << count << endl ;
  for ( long long i = 3 ;
  i <= ( long long ) sqrt ( n ) ;
  i += 2 ) {
    count = 0 ;
    while ( n % i == 0 ) {
      count ++ ;
      n = n / i ;
    }
    if ( count ) cout << i << " " << count << endl ;
  }
  if ( n > 2 ) cout << n << " " << "1" << endl ;
}
