string decimalToBinary ( int num , int k_prec ) {
  string binary ;
  int Integral ;
  int fractional = num - Integral ;
  while ( ( Integral ) ) {
    int rem = Integral % 2 ;
    binary += to_string ( rem ) ;
    ;
    Integral /= 2 ;
  }
  binary . erase ( binary . begin ( ) , binary . end ( ) ) ;
  binary += '.' ;
  while ( ( k_prec ) ) {
    fractional *= 2 ;
    int fractBit = ( int ) fractional ;
    if ( ( fractBit == 1 ) || ( fractBit == 2 ) ) {
      fractional -= fractBit ;
      binary += '1' ;
    }
    else {
      binary += '0' ;
    }
    k_prec -- ;
  }
  return binary ;
}
