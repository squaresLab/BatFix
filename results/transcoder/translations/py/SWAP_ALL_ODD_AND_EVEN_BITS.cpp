static inline unsigned swapBits ( unsigned x ) {
  unsigned evenBits = x & 0xAAAAAAAA ;
  unsigned odd_bits = x & 0x55555555 ;
  evenBits >>= 1 ;
  odd_bits <<= 1 ;
  return ( evenBits | odd_bits ) ;
}
