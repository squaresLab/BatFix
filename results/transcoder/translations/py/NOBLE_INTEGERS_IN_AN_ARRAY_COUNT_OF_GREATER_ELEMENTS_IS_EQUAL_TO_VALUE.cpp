int nobleInteger ( int * arr , int size ) {
  for ( int i = 0 ;
  i != size ;
  i ++ ) {
    int count = 0 ;
    for ( int j = 0 ;
    j != size ;
    j ++ ) {
      if ( ( arr [ i ] < arr [ j ] ) && ( arr [ i ] > arr [ j ] ) ) {
        count ++ ;
      }
    }
    if ( ( count == arr [ i ] ) && ( arr [ i ] > arr [ j ] ) ) {
      return arr [ i ] ;
    }
  }
  return - 1 ;
}
