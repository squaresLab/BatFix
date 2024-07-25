int nextPowerOf2 ( int n ) {
  int count = 0 ;
  ;
  if ( ( n > 0 ) && ! ( n & ( n - 1 ) ) ) return n ;
  while ( ( n != 0 ) && ( n != 1 ) ) {
    n >>= 1 ;
    count ++ ;
  }
  return 1 << count ;
  ;
}
