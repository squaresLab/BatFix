bool isDivisible ( unsigned long n ) {
  while ( n / 100 > 0 ) {
    int last_digit = ( int ) n % 10 ;
    n /= 10 ;
    n += last_digit * 3 ;
  }
  return ( n % 29 == 0 ) ;
}
