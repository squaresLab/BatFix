int countSetBitsRec ( int num ) {
  int nibble = 0 ;
  if ( 0 == num ) return num_to_bits [ 0 ] ;
  nibble = num & 0xf ;
  return num_to_bits [ nibble ] + countSetBitsRec ( num >> 4 ) ;
}
