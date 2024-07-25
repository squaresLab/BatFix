int playGame ( int arr [ ] ) {
  std :: set < int > set ;
  for ( int i : arr ) {
    set . insert ( i ) ;
  }
  return ( set . size ( ) % 2 == 0 ) ? 1 : 2 ;
}
