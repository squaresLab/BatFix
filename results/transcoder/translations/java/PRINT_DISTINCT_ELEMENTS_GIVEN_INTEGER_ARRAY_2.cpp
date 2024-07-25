void printDistinct ( int arr [ ] ) {
  set < int > set ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    if ( ! set . count ( arr [ i ] ) ) {
      set . insert ( arr [ i ] ) ;
      cout << arr [ i ] << " " ;
    }
  }
}
