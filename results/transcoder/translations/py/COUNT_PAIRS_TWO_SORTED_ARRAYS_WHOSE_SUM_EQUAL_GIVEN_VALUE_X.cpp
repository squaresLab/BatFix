int countPairs ( int arr1 [ ] , int arr2 [ ] , int m , int n , int x ) {
  int count = 0 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( arr1 [ i ] + arr2 [ j ] == x ) {
        count = count + 1 ;
      }
    }
  }
  return count ;
}
