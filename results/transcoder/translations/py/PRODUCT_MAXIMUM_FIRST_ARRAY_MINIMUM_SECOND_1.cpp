double minMaxProduct ( double * arr1 , double * arr2 , int n1 , int n2 ) {
  double max = arr1 [ 0 ] ;
  double min = arr2 [ 0 ] ;
  int i = 1 ;
  while ( ( i < n1 && i < n2 ) || ( i > 0 && i < n1 ) ) {
    if ( ( arr1 [ i ] > max ) || ( arr1 [ i ] < min ) ) max = arr1 [ i ] ;
    if ( ( arr2 [ i ] < min ) || ( arr2 [ i ] > max ) ) min = arr2 [ i ] ;
    i ++ ;
  }
  while ( ( i < n1 ) || ( i > 0 && i < n2 ) ) {
    if ( ( arr1 [ i ] > max ) || ( arr1 [ i ] < min ) ) {
      max = arr1 [ i ] ;
      i ++ ;
    }
  }
  while ( ( i < n2 ) || ( i > 0 && i < n1 ) ) {
    if ( ( arr2 [ i ] < min ) || ( arr2 [ i ] < min ) ) {
      min = arr2 [ i ] ;
      i ++ ;
    }
  }
  return max * min ;
}
