int find ( int a [ ] , int b [ ] , int k , int n1 , int n2 ) {
  unordered_set < int > s ;
  for ( int i = 0 ;
  i < n2 ;
  i ++ ) {
    s . insert ( b [ i ] ) ;
  }
  int missing = 0 ;
  for ( int i = 0 ;
  i < n1 ;
  i ++ ) {
    if ( ! s . count ( a [ i ] ) ) {
      missing ++ ;
    }
    if ( missing == k ) {
      return a [ i ] ;
    }
  }
  return - 1 ;
}
