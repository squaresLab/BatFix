long long exponentiation ( long long base , long long exp ) {
  long long t = 1 ;
  while ( exp > 0 ) {
    if ( exp % 2 != 0 ) {
      t = ( t * base ) % N ;
    }
    base = ( base * base ) % N ;
    exp /= 2 ;
  }
  return t % N ;
}
