public : int numberOfSquares ( int base ) {
  base = ( base - 2 ) ;
  base = base / 2 ;
  return base * ( base + 1 ) / 2 ;
}
