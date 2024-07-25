void merge ( int m , int n ) {
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    int j , last = arr1 [ m - 1 ] ;
    for ( j = m - 2 ;
    j >= 0 && arr1 [ j ] > arr2 [ i ] ;
    j -- ) {
      arr1 [ j + 1 ] = arr1 [ j ] ;
    }
    if ( j != m - 2 || last > arr2 [ i ] ) {
      arr1 [ j + 1 ] = arr2 [ i ] ;
      arr2 [ i ] = last ;
    }
  }
}
