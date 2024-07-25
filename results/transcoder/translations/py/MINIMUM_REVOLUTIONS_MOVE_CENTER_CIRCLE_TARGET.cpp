double minRevolutions ( int r , double x1 , double y1 , double x2 , double y2 ) {
  double d = sqrt ( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) ) ;
  return ceil ( d / ( 2 * r ) ) ;
}
