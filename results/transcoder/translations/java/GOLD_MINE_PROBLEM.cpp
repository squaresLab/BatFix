int getMaxGold ( int gold [ ] [ 2 ] , int m , int n ) {
  int goldTable [ m ] [ n ] ;
  for ( int * rows = goldTable ;
  rows ;
  rows = rows + m ) {
    memset ( rows , 0 , sizeof ( int ) * m ) ;
  }
  for ( int col = n - 1 ;
  col >= 0 ;
  col -- ) {
    for ( int row = 0 ;
    row < m ;
    row ++ ) {
      int right = ( col == n - 1 ) ? 0 : goldTable [ row ] [ col + 1 ] ;
      int rightUp = ( row == 0 || col == n - 1 ) ? 0 : goldTable [ row - 1 ] [ col + 1 ] ;
      int rightDown = ( row == m - 1 || col == n - 1 ) ? 0 : goldTable [ row + 1 ] [ col + 1 ] ;
      goldTable [ row ] [ col ] = gold [ row ] [ col ] + max ( right , max ( rightUp , rightDown ) ) ;
      ;
    }
  }
  int res = goldTable [ 0 ] [ 0 ] ;
  for ( int i = 1 ;
  i < m ;
  i ++ ) {
    res = max ( res , goldTable [ i ] [ 0 ] ) ;
  }
  return res ;
}
