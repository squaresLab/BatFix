int getFirstSetBitPos ( int n ) {
  return log2 ( n & - n ) + 1 ;
}
