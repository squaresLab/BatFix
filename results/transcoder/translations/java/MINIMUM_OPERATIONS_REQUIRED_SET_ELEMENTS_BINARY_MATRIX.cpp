int minOperation ( bool arr [ N ] [ M ] ) {
  int ans = 0 ;
  for ( int i = N - 1 ;
  i >= 0 ;
  i -- ) {
    for ( int j = M - 1 ;
    j >= 0 ;
    j -- ) {
      if ( arr [ i ] [ j ] == false ) {
        ans ++ ;
        for ( int k = 0 ;
        k <= i ;
        k ++ ) {
          for ( int h = 0 ;
          h <= j ;
          h ++ ) {
            if ( arr [ k ] [ h ] == true ) arr [ k ] [ h ] = false ;
            else arr [ k ] [ h ] = true ;
          }
        }
      }
    }
  }
  return ans ;
}
