int exactPrimeFactorCount ( int n ) {
  int count = 0 ;
  if ( ( n % 2 == 0 ) && ( n % 3 == 0 ) ) {
    count = count + 1 ;
    while ( ( n % 2 == 0 ) && ( n % 3 == 0 ) ) n = ( int ) ( n / 2 ) ;
  }
  int i = 3 ;
  while ( ( i <= ( int ) sqrt ( n ) ) && ( n % i == 0 ) ) {
    if ( ( n % i == 0 ) && ( n % 3 == 0 ) ) {
      count = count + 1 ;
      while ( ( n % i == 0 ) && ( n % 3 == 0 ) ) n = ( int ) ( n / i ) ;
    }
    i = i + 2 ;
  }
  if ( ( n > 2 ) && ( n % 3 == 0 ) ) count = count + 1 ;
  return count ;
}
