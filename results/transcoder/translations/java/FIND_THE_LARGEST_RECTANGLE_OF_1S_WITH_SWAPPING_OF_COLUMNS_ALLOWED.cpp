int maxArea ( int mat [ ] [ C + 1 ] ) {
  int hist [ R + 1 ] [ C + 1 ] ;
  for ( int i = 0 ;
  i < C ;
  i ++ ) {
    hist [ 0 ] [ i ] = mat [ 0 ] [ i ] ;
    for ( int j = 1 ;
    j < R ;
    j ++ ) hist [ j ] [ i ] = ( mat [ j ] [ i ] == 0 ) ? 0 : hist [ j - 1 ] [ i ] + 1 ;
  }
  for ( int i = 0 ;
  i < R ;
  i ++ ) {
    int count [ R + 1 ] ;
    for ( int j = 0 ;
    j < C ;
    j ++ ) count [ hist [ i ] [ j ] ] ++ ;
    int col_no = 0 ;
    for ( int j = R ;
    j >= 0 ;
    j -- ) {
      if ( count [ j ] > 0 ) {
        for ( int k = 0 ;
        k < count [ j ] ;
        k ++ ) {
          hist [ i ] [ col_no ] = j ;
          col_no ++ ;
        }
      }
    }
  }
  int curr_area , max_area = 0 ;
  for ( int i = 0 ;
  i < R ;
  i ++ ) {
    for ( int j = 0 ;
    j < C ;
    j ++ ) {
      curr_area = ( j + 1 ) * hist [ i ] [ j ] ;
      if ( curr_area > max_area ) max_area = curr_area ;
    }
  }
  return max_area ;
}
