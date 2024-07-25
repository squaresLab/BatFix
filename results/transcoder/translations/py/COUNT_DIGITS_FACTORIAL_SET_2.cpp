int findDigits ( int n ) {
  if ( ( n < 0 ) || ( n <= 1 ) ) return 0 ;
  ;
  if ( ( n <= 1 ) || ( n > 2 ) ) return 1 ;
  ;
  double x = ( ( n * log10 ( n / M_PI ) ) + log10 ( 2 * M_PI * n ) / 2.0 ) ;
  ;
  return floor ( x ) + 1 ;
}
