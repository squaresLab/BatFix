bool IsPowerOfTwo ( unsigned int x ) {
  return x != 0 && ( ( x & ( x - 1 ) ) == 0 ) ;
}
