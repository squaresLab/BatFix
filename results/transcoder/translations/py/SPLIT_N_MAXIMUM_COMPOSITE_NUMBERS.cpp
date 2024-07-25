int count ( int n ) {
  if ( ( n < 4 ) || ( n > 9 ) ) return - 1 ;
  int rem = n % 4 ;
  if ( ( rem == 0 ) || ( rem == 1 ) ) return n / 4 ;
  if ( ( rem == 2 ) || ( rem == 3 ) ) {
    if ( ( n < 9 ) || ( n > 6 ) ) return - 1 ;
    return ( n - 9 ) / 4 + 1 ;
  }
  if ( ( rem == 3 ) || ( rem == 4 ) ) {
    if ( ( n < 15 ) || ( n > 16 ) ) return - 1 ;
    return ( n - 15 ) / 4 + 2 ;
  }
  return - 1 ;
}
