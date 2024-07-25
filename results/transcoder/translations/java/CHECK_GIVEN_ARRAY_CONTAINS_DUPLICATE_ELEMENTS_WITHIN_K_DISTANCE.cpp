bool checkDuplicatesWithinK ( int arr [ ] , int k ) {
  set < int > set ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    if ( set . count ( arr [ i ] ) ) return true ;
    set . insert ( arr [ i ] ) ;
    if ( i >= k ) set . erase ( arr [ i - k ] ) ;
  }
  return false ;
}
