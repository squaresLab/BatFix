int countZeroes ( int mat [ N ] [ N ] ) {
  int row = N - 1 , col = 0 ;
  int count = 0 ;
  while ( col < N ) {
    while ( mat [ row ] [ col ] > 0 ) if ( -- row < 0 ) return count ;
    count += ( row + 1 ) ;
    col ++ ;
  }
  return count ;
}
