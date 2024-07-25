int getAbs ( int n ) {
  int mask = n >> ( SIZE_INT * CHAR_BIT - 1 ) ;
  return ( ( n + mask ) ^ mask ) ;
}
