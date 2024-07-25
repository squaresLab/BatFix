int findMinZero ( int p ) {
  int first = 1 ;
  int second = 1 ;
  int number = 2 ;
  int next = 1 ;
  while ( ( next ) ) {
    next = ( first + second ) % p ;
    first = second ;
    second = next ;
    number = number + 1 ;
  }
  return number ;
}
