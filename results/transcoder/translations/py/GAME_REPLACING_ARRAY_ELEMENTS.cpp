int playGame ( int arr [ ] , int n ) {
  set < int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) s . insert ( arr [ i ] ) ;
  return 1 == s . size ( ) % 2 ? 2 : 1 ;
}
