bool isPowerOfFour ( unsigned n ) {
  return ( n != 0 && ( ( n & ( n - 1 ) ) == 0 ) && ! ( n & 0xAAAAAAAA ) ) ;
  ;
}
