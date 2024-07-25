int isPowerOfFour ( int n ) {
  int count = 0 ;
  int x = n & ( n - 1 ) ;
  if ( n > 0 && x == 0 ) {
    while ( n > 1 ) {
      n >>= 1 ;
      count += 1 ;
    }
    return ( count % 2 == 0 ) ;
  }
  return 0 ;
}
