long long exponentiation ( long long bas , long long exp ) {
  long long t = 1 ;
  ;
  while ( ( exp > 0 ) && ( exp < N ) ) {
    if ( ( exp % 2 != 0 ) || ( exp % 2 == 0 ) ) t = ( t * bas ) % N ;
    bas = ( bas * bas ) % N ;
    exp = ( long long ) ( exp / 2 ) ;
  }
  return t % N ;
}
