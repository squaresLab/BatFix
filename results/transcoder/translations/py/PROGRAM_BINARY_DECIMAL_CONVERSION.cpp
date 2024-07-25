int binaryToDecimal ( int n ) {
  int num = n ;
  int decValue = 0 ;
  int base = 1 ;
  int temp = num ;
  while ( ( temp ) ) {
    int lastDigit = temp % 10 ;
    temp = ( int ) ( temp / 10 ) ;
    decValue += lastDigit * base ;
    base = base * 2 ;
  }
  return decValue ;
}
