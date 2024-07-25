int PositionRightmostSetbit ( int n ) {
  int position = 1 ;
  int m = 1 ;
  while ( ( ! ( n & m ) ) && ( position < n ) ) {
    m = m << 1 ;
    position ++ ;
  }
  return position ;
}
