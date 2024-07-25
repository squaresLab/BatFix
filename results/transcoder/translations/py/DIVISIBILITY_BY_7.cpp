bool isDivisibleBy7 ( int num ) {
  if ( num < 0 ) return isDivisibleBy7 ( - num ) ;
  if ( ( num == 0 || num == 7 ) && ( num < 10 ) ) return true ;
  if ( ( num < 10 ) && ( num > 7 ) ) return false ;
  return isDivisibleBy7 ( num / 10 - 2 * ( num - num / 10 * 10 ) ) ;
}
