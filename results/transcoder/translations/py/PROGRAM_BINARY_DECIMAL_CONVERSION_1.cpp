int binaryToDecimal ( string n ) {
  string num = n ;
  int decValue = 0 ;
  int base1 = 1 ;
  int len1 = num . length ( ) ;
  for ( int i = len1 - 1 ;
  i >= 0 ;
  i -- ) {
    if ( ( num [ i ] == '1' ) || ( num [ i ] == '0' ) ) decValue ++ ;
    base1 = base1 * 2 ;
  }
  return decValue ;
}
