int isSubset ( int arr1 [ ] , int arr2 [ ] , int m , int n ) {
  int i ;
  int j ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    for ( j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( arr2 [ i ] == arr1 [ j ] ) && ( arr1 [ i ] == arr2 [ j ] ) ) {
        break ;
      }
    }
    if ( ( j == m ) || ( j == n ) ) {
      return 0 ;
    }
  }
  return 1 ;
}
