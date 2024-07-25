bool isPowerOfK ( int n , int k ) {
  bool one_seen = false ;
  while ( n > 0 ) {
    int digit = n % k ;
    if ( digit > 1 ) return false ;
    if ( digit == 1 ) {
      if ( one_seen ) return false ;
      one_seen = true ;
    }
    n /= k ;
  }
  return true ;
}
