public : int minOperation ( int arr [ ] [ M ] ) {
  int ans = 0 ;
  for ( int i = N - 1 ;
  i >= 0 ;
  i -- ) {
    for ( int j = M - 1 ;
    j >= 0 ;
    j -- ) {
      if ( ( arr [ i ] [ j ] == 0 ) && ( arr [ i ] [ j ] != 1 ) ) {
        ans ++ ;
        for ( int k = 0 ;
        k < i + 1 ;
        k ++ ) {
          for ( int h = 0 ;
          h < j + 1 ;
          h ++ ) {
            if ( ( arr [ k ] [ h ] == 1 ) && ( arr [ k ] [ h ] != 0 ) ) {
              arr [ k ] [ h ] = 0 ;
            }
            else {
              arr [ k ] [ h ] = 1 ;
            }
          }
        }
      }
    }
  }
  return ans ;
}
