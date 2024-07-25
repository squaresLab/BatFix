int smallest ( int x , int y , int z ) {
  int c = 0 ;
  while ( x != 0 && y != 0 && z != 0 ) {
    x -- ;
    y -- ;
    z -- ;
    c ++ ;
  }
  return c ;
}
