int minMaxProduct ( int arr1 [ ] , int arr2 [ ] , int n1 , int n2 ) {
  sort ( arr1 , arr1 + n1 ) ;
  sort ( arr2 , arr2 + n2 ) ;
  return arr1 [ n1 - 1 ] * arr2 [ 0 ] ;
}
