bool isPowerOfTwo ( unsigned x ) {
  return ( x && ( ! ( x & ( x - 1 ) ) ) ) ;
}
