int nextPowerOf2 ( int n ) {
  int p = 1 ;
  if ( n && ( n & ( n - 1 ) ) == 0 ) return n ;
  while ( p < n ) {
    p <<= 1 ;
  }
  return p ;
}
