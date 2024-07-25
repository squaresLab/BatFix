void bresenham ( int x1 , int y1 , int x2 , int y2 ) {
  double m_new = 2 * ( y2 - y1 ) ;
  double slope_error_new = m_new - ( x2 - x1 ) ;
  int y = y1 ;
  for ( int x = x1 ;
  x <= x2 ;
  x ++ ) {
    cout << "(" << x << "," << y << ")\n" ;
    slope_error_new = slope_error_new + m_new ;
    if ( ( slope_error_new >= 0 ) && ( slope_error_new <= 1 ) ) {
      y = y + 1 ;
      slope_error_new = slope_error_new - 2 * ( x2 - x1 ) ;
    }
  }
}
