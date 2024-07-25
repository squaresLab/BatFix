double minRevolutions ( double r , int x1 , int y1 , int x2 , int y2 ) {
  double d = sqrt ( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) ) ;
  return ceil ( d / ( 2 * r ) ) ;
}
