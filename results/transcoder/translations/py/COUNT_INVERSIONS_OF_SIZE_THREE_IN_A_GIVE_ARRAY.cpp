int getInvCount ( int arr [ ] ) {
  int n = arr . size ( ) ;
  int invcount = 0 ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n ;
    j ++ ) {
      if ( arr [ i ] > arr [ j ] ) {
        for ( int k = j + 1 ;
        k <= n ;
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
