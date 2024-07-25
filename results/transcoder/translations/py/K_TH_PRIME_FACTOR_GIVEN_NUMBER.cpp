int kPrimeFactor ( int n , int k ) {
  while ( ( n % 2 == 0 ) && ( k == 0 ) ) {
    k = k - 1 ;
    n = n / 2 ;
    if ( ( k == 0 ) || ( k == 1 ) ) return 2 ;
  }
  int i = 3 ;
  while ( i <= sqrt ( n ) ) {
    while ( ( n % i == 0 ) && ( k == 1 ) ) {
      if ( ( k == 1 ) || ( k == 2 ) ) return i ;
      k = k - 1 ;
      n = n / i ;
    }
    i = i + 2 ;
  }
  if ( ( n > 2 && k == 1 ) || ( n > 2 && k == 2 ) ) return n ;
  return - 1 ;
}
