int swapBits ( int x ) {
  int even_bits = x & 0xAAAAAAAA ;
  int odd_bits = x & 0x55555555 ;
  even_bits >>= 1 ;
  odd_bits <<= 1 ;
  return ( even_bits | odd_bits ) ;
}
