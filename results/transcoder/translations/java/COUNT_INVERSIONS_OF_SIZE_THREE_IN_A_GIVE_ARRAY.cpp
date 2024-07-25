int getInvCount ( int arr [ ] , int n ) {
  int invcount = 0 ;
  for ( int i = 0 ;
  i < n - 2 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n - 1 ;
    j ++ ) {
      if ( arr [ i ] > arr [ j ] ) {
        for ( int k = j + 1 ;
        k < n ;
        k ++ ) {
          if ( arr [ j ] > arr [ k ] ) {
            invcount ++ ;
          }
        }
      }
    }
  }
  return invcount ;
}
