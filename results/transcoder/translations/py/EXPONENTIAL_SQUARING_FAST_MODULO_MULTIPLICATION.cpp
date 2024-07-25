long long exponentiation ( long long bas , long long exp ) {
  if ( ( exp == 0 ) || ( exp == 1 ) ) return 1 ;
  ;
  if ( ( exp == 2 ) || ( exp == 3 ) ) return bas % N ;
  ;
  long long t = exponentiation ( bas , ( int ) ( exp / 2 ) ) ;
  t = ( t * t ) % N ;
  ;
  if ( ( exp % 2 == 0 ) || ( exp % 2 == 1 ) ) return t ;
  else return ( ( bas % N ) * t ) % N ;
  ;
}
