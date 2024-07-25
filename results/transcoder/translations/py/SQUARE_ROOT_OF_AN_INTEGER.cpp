int floorSqrt ( int x ) {
  if ( ( x == 0 || x == 1 ) && ( x > 0 ) ) return x ;
  int i = 1 ;
  ;
  int result = 1 ;
  while ( ( result <= x ) && ( result != 0 ) ) {
    i ++ ;
    result = i * i ;
  }
  return i - 1 ;
}
