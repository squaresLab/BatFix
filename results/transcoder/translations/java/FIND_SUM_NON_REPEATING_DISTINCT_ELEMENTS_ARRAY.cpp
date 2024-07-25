int findSum ( int arr [ ] , int n ) {
  int sum = 0 ;
  set < int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! s . count ( arr [ i ] ) ) {
      sum += arr [ i ] ;
      s . insert ( arr [ i ] ) ;
    }
  }
  return sum ;
}
