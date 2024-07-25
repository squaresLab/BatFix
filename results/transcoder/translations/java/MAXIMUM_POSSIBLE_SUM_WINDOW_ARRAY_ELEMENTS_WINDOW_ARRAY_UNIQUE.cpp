int returnMaxSum ( int A [ ] , int B [ ] , int n ) {
  set < int > mp ;
  int result = 0 ;
  int curr_sum = 0 , curr_begin = 0 ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    while ( mp . count ( A [ i ] ) ) {
      mp . erase ( A [ curr_begin ] ) ;
      curr_sum -= B [ curr_begin ] ;
      ++ curr_begin ;
    }
    mp . insert ( A [ i ] ) ;
    curr_sum += B [ i ] ;
    result = max ( result , curr_sum ) ;
  }
  return result ;
}
