int findArea ( int arr [ ] , int n ) {
  set < int > s ;
  int first = 0 , second = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! s . count ( arr [ i ] ) ) {
      s . insert ( arr [ i ] ) ;
      continue ;
    }
    if ( arr [ i ] > first ) {
      second = first ;
      first = arr [ i ] ;
    }
    else if ( arr [ i ] > second ) {
      second = arr [ i ] ;
    }
  }
  return ( first * second ) ;
}
