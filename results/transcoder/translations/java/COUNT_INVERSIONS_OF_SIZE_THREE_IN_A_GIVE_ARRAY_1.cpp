int getInvCount ( int arr [ ] , int n ) {
  int invcount = 0 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    int small = 0 ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) if ( arr [ i ] > arr [ j ] ) small ++ ;
    int great = 0 ;
    for ( int j = i - 1 ;
    j >= 0 ;
    j -- ) if ( arr [ i ] < arr [ j ] ) great ++ ;
    invcount += great * small ;
  }
  return invcount ;
}
