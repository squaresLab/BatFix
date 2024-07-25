void bin ( int32_t n ) {
  if ( n > 1 ) {
    bin ( n >> 1 ) ;
  }
  printf ( "%d\n" , n & 1 ) ;
}
