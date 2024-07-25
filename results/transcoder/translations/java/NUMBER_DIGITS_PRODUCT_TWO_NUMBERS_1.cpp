int countDigits ( int a , int b ) {
  if ( a == 0 || b == 0 ) return 1 ;
  return ( int ) floor ( log10 ( abs ( a ) ) + log10 ( abs ( b ) ) ) + 1 ;
}
