inline int vol_tetra ( int side ) {
  double volume = ( side * * 3 / ( 6 * sqrt ( 2 ) ) ) ;
  return round ( volume ) ;
}
