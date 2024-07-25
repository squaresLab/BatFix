void reorder ( ) {
  int temp [ arr . size ( ) ] ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    temp [ index [ i ] ] = arr [ i ] ;
  }
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    arr [ i ] = temp [ i ] ;
    index [ i ] = i ;
  }
}
