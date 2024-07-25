void bubbleSort ( vector < int > & arr ) {
  int n = arr . size ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n - i - 1 ;
    j ++ ) {
      if ( arr [ j ] > arr [ j + 1 ] ) {
        arr [ j ] = arr [ j + 1 ] ;
        arr [ j + 1 ] = arr [ j ] ;
      }
    }
  }
}
