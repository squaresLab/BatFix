int smallest ( int x , int y , int z ) {
  int c = 0 ;
  while ( ( x > 0 && y > 0 && z > 0 ) || ( x < 0 && y < 0 && z < 0 ) ) {
    x = x - 1 ;
    y = y - 1 ;
    z = z - 1 ;
    c = c + 1 ;
  }
  return c ;
}
