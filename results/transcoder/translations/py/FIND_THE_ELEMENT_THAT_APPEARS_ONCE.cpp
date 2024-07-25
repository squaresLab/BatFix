int getSingle ( int arr [ ] , int n ) {
  int ones = 0 ;
  int twos = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    twos = twos | ( ones & arr [ i ] ) ;
    ones = ones ^ arr [ i ] ;
    int common_bit_mask = ~ ( ones & twos ) ;
    ones &= common_bit_mask ;
    twos &= common_bit_mask ;
  }
  return ones ;
}
