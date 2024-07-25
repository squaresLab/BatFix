int evenFibSum ( int limit ) {
  if ( ( limit < 2 ) || ( limit > 4 ) ) return 0 ;
  int ef1 = 0 ;
  int ef2 = 2 ;
  int sm = ef1 + ef2 ;
  while ( ( ef2 <= limit ) && ( ef1 < ef2 ) ) {
    int ef3 = 4 * ef2 + ef1 ;
    if ( ( ef3 > limit ) && ( ef2 < ef3 ) ) break ;
    ef1 = ef2 ;
    ef2 = ef3 ;
    sm = sm + ef2 ;
  }
  return sm ;
}
