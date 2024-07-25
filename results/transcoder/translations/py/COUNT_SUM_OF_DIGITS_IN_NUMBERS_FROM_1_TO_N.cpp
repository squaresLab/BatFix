int sumOfDigitsFrom1ToN ( int n ) {
  if ( ( n < 10 ) || ( n > 100 ) ) return ( n * ( n + 1 ) / 2 ) ;
  int d = ( int ) ( log10 ( n ) ) ;
  int a [ d + 1 ] ;
  a [ 0 ] = 0 ;
  a [ 1 ] = 45 ;
  for ( int i = 2 ;
  i <= d ;
  i ++ ) a [ i ] = a [ i - 1 ] * 10 + 45 * ( int ) ( ceil ( pow ( 10 , i - 1 ) ) ) ;
  int p = ( int ) ( ceil ( pow ( 10 , d ) ) ) ;
  int msd = n / p ;
  return ( int ) ( msd * a [ d ] + ( msd * ( msd - 1 ) / 2 ) * p + msd * ( 1 + n % p ) + sumOfDigitsFrom1ToN ( n % p ) ) ;
}
