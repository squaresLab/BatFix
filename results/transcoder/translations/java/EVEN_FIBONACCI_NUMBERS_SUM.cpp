int evenFibSum ( int limit ) {
  if ( limit < 2 ) return 0 ;
  uint32_t ef1 = 0 , ef2 = 2 ;
  uint32_t sum = ef1 + ef2 ;
  while ( ef2 <= limit ) {
    uint32_t ef3 = 4 * ef2 + ef1 ;
    if ( ef3 > limit ) break ;
    ef1 = ef2 ;
    ef2 = ef3 ;
    sum += ef2 ;
  }
  return ( int ) sum ;
}
