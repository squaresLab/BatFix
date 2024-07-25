int countZeroes ( int mat [ ] [ ] ) {
  int N = 5 ;
  int row = N - 1 ;
  int col = 0 ;
  int count = 0 ;
  while ( ( col < N ) && ( mat [ row ] [ col ] ) ) {
    while ( ( row < 0 ) || ( row > N ) ) {
      if ( ( row < 0 ) || ( row > N ) ) {
        return count ;
      }
      row = row - 1 ;
    }
    count = count + ( row + 1 ) ;
    col = col + 1 ;
  }
  return count ;
}
