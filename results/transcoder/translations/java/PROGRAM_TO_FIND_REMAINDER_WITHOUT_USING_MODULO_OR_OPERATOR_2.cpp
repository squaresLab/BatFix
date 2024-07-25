int getRemainder ( int num , int divisor ) {
  while ( num >= divisor ) {
    num -= divisor ;
  }
  return num ;
}
