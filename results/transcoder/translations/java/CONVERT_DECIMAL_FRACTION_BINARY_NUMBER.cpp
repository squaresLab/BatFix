string decimalToBinary ( double num , int k_prec ) {
  string binary ;
  int Integral = ( int ) num ;
  double fractional = num - Integral ;
  while ( Integral ) {
    int rem = Integral % 2 ;
    binary += ( char ) ( rem + '0' ) ;
    Integral /= 2 ;
  }
  binary = reverse ( binary . begin ( ) , binary . end ( ) ) ;
  binary += ( '.' ) ;
  while ( k_prec -- ) {
    fractional *= 2 ;
    int fract_bit = ( int ) fractional ;
    if ( fract_bit == 1 ) {
      fractional -= fract_bit ;
      binary += ( char ) ( 1 + '0' ) ;
    }
    else {
      binary += ( char ) ( 0 + '0' ) ;
    }
  }
  return binary ;
}
