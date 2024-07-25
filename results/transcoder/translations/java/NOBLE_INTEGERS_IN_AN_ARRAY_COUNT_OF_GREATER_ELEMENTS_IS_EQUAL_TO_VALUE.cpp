int nobleInteger ( int arr [ ] ) {
  int size = sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    int count = 0 ;
    for ( int j = 0 ;
    j < size ;
    j ++ ) if ( arr [ i ] < arr [ j ] ) count ++ ;
    if ( count == arr [ i ] ) return arr [ i ] ;
  }
  return - 1 ;
}
