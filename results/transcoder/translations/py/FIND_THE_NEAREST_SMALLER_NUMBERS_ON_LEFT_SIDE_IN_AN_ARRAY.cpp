void printPrevSmaller ( int arr [ ] , int n ) {
  cout << "_, " ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = i - 1 ;
    j >= 0 ;
    j -- ) {
      if ( ( arr [ j ] < arr [ i ] ) && ( arr [ j ] > arr [ i ] ) ) {
        cout << arr [ j ] << ", " ;
        break ;
      }
    }
    if ( ( j == - 1 ) || ( arr [ j ] > arr [ i ] ) ) cout << "_, " ;
  }
}
