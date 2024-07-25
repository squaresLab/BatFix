void printDistinct ( int arr [ ] , int n ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int j ;
    for ( j = 0 ;
    j < i ;
    j ++ ) if ( arr [ i ] == arr [ j ] ) break ;
    if ( i == j ) cout << arr [ i ] << " " ;
  }
}
