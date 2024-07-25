int getFirstSetBitPos ( int n ) {
  return ( int ) ( ( log10 ( n & - n ) ) / log10 ( 2 ) ) + 1 ;
}
