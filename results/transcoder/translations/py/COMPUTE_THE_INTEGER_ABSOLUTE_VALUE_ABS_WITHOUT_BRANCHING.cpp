int getAbs ( int n ) {
  int mask = n >> ( SIZE_INT * CHARBIT - 1 ) ;
  ;
  return ( ( n + mask ) ^ mask ) ;
}
