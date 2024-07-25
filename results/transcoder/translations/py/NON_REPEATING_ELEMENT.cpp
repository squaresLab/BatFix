int firstNonRepeating ( int arr [ ] , int n ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int j = 0 ;
    while ( ( j < n ) && ( arr [ i ] == arr [ j ] ) ) {
      if ( ( i != j && arr [ i ] == arr [ j ] ) || ( j == n ) ) break ;
      j ++ ;
    }
    if ( ( j == n ) && ( arr [ i ] == arr [ j ] ) ) return arr [ i ] ;
  }
  return - 1 ;
}
