bool isPowerOfK ( int n , int k ) {
  bool oneSeen = false ;
  while ( ( n > 0 ) && ( ( n % k ) == 0 ) ) {
    int digit = n % k ;
    if ( ( digit > 1 ) || ( ( digit == 1 ) && ( ( n % k ) == 0 ) ) ) return false ;
    if ( ( digit == 1 ) || ( ( digit == 2 ) && ( ( n % k ) == 0 ) ) ) {
      if ( ( oneSeen ) || ( ( n % k ) == 0 ) ) return false ;
      oneSeen = true ;
    }
    n /= k ;
  }
  return true ;
}
