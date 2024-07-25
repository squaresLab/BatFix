int printKDistinct ( int arr [ ] , int n , int k ) {
  int dist_count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int j = 0 ;
    while ( j < n ) {
      if ( ( i != j && arr [ j ] == arr [ i ] ) || ( j == n ) ) break ;
      j ++ ;
    }
    if ( ( j == n ) && ( arr [ i ] == arr [ j ] ) ) dist_count ++ ;
    if ( ( dist_count == k ) && ( arr [ i ] == arr [ j ] ) ) return arr [ i ] ;
  }
  return - 1 ;
}
