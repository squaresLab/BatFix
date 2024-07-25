int countLattice ( int r ) {
  if ( r <= 0 ) return 0 ;
  int result = 4 ;
  for ( int x = 1 ;
  x < r ;
  x ++ ) {
    int ySquare = r * r - x * x ;
    int y = ( int ) sqrt ( ySquare ) ;
    if ( y * y == ySquare ) result += 4 ;
  }
  return result ;
}
