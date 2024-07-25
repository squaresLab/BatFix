bool isPowerOfTwo ( int n ) {
  if ( ( n == 0 ) || ( n == 1 ) ) return false ;
  while ( ( n != 1 ) && ( n % 2 != 0 ) ) {
    if ( ( n % 2 != 0 ) || ( n % 2 != 1 ) ) return false ;
    n = n / 2 ;
  }
  return true ;
}
