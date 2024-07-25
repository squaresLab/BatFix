bool getParity ( int n ) {
  bool parity = false ;
  while ( n != 0 ) {
    parity = ! parity ;
    n = n & ( n - 1 ) ;
  }
  return parity ;
}
