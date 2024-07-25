int addOne ( int x ) {
  int m = 1 ;
  while ( ( int ) ( x & m ) >= 1 ) {
    x = x ^ m ;
    m <<= 1 ;
  }
  x = x ^ m ;
  return x ;
}
