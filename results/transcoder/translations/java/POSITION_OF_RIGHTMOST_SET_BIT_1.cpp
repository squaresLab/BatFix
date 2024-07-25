int PositionRightmostSetbit ( int n ) {
  int position = 1 ;
  int m = 1 ;
  while ( ( n & m ) == 0 ) {
    m = m << 1 ;
    position ++ ;
  }
  return position ;
}
