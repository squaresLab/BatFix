int countRotations ( int arr [ ] , int n ) {
  int min = arr [ 0 ] , min_index = - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( min > arr [ i ] ) {
      min = arr [ i ] ;
      min_index = i ;
    }
  }
  return min_index ;
}
