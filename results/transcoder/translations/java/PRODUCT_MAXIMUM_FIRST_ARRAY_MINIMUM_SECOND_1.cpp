int minMaxProduct ( int arr1 [ ] , int arr2 [ ] , int n1 , int n2 ) {
  int max = arr1 [ 0 ] ;
  int min = arr2 [ 0 ] ;
  int i ;
  for ( i = 1 ;
  i < n1 && i < n2 ;
  ++ i ) {
    if ( arr1 [ i ] > max ) {
      max = arr1 [ i ] ;
    }
    if ( arr2 [ i ] < min ) {
      min = arr2 [ i ] ;
    }
  }
  while ( i < n1 ) {
    if ( arr1 [ i ] > max ) {
      max = arr1 [ i ] ;
    }
    ++ i ;
  }
  while ( i < n2 ) {
    if ( arr2 [ i ] < min ) {
      min = arr2 [ i ] ;
    }
    ++ i ;
  }
  return max * min ;
}
