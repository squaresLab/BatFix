int maximum_zeros ( int arr [ ] , int n , int k ) {
  int subset [ k + 1 ] [ MAX5 + 5 ] ;
  for ( int * row = subset ;
  row [ 0 ] ;
  ++ row ) std :: swap ( * row , * row + 1 ) ;
  subset [ 0 ] [ 0 ] = 0 ;
  for ( int p = 0 ;
  p < n ;
  ++ p ) {
    int pw2 = 0 , pw5 = 0 ;
    while ( arr [ p ] % 2 == 0 ) {
      ++ pw2 ;
      arr [ p ] /= 2 ;
    }
    while ( arr [ p ] % 5 == 0 ) {
      ++ pw5 ;
      arr [ p ] /= 5 ;
    }
    for ( int i = k - 1 ;
    i >= 0 ;
    -- i ) {
      for ( int j = 0 ;
      j < MAX5 ;
      ++ j ) {
        if ( subset [ i ] [ j ] != - 1 ) subset [ i + 1 ] [ j + pw5 ] = max ( subset [ i + 1 ] [ j + pw5 ] , subset [ i ] [ j ] + pw2 ) ;
      }
    }
  }
  int ans = 0 ;
  for ( int i = 0 ;
  i < MAX5 ;
  ++ i ) ans = max ( ans , min ( i , subset [ k ] [ i ] ) ) ;
  return ans ;
}
