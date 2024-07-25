bool checkOrigin ( float x1 , float y1 , float x2 , float y2 ) {
  return ( x1 * ( y2 - y1 ) == y1 * ( x2 - x1 ) ) ;
}
