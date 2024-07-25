void printPrevSmaller ( int arr [ ] , int n ) {
  cout << "_, " ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int j ;
    for ( j = i - 1 ;
    j >= 0 ;
    j -- ) {
      if ( arr [ j ] < arr [ i ] ) {
        cout << arr [ j ] << ", " ;
        break ;
      }
    }
    if ( j == - 1 ) {
      cout << "_, " ;
    }
  }
}
