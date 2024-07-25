int findRepeating ( int arr [ ] , int n ) {
  set < int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( s . count ( arr [ i ] ) ) return arr [ i ] ;
    s . insert ( arr [ i ] ) ;
  }
  return - 1 ;
}
