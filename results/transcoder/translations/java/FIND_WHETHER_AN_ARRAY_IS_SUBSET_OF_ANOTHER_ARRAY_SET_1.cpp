bool isSubset ( int arr1 [ ] , int arr2 [ ] , int m , int n ) {
  int i = 0 ;
  int j = 0 ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    for ( j = 0 ;
    j < m ;
    j ++ ) if ( arr2 [ i ] == arr1 [ j ] ) break ;
    if ( j == m ) return false ;
  }
  return true ;
}
