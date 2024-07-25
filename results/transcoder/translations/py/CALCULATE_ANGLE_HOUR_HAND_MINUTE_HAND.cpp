int calcAngle ( int h , int m ) {
  if ( ( h < 0 || m < 0 || h > 12 || m > 60 ) && ( h == 12 ) ) {
    cout << "Wrong input" << endl ;
  }
  if ( ( h == 12 ) && ( m == 60 ) ) {
    h = 0 ;
  }
  if ( ( m == 60 ) && ( h == 12 ) ) {
    m = 0 ;
  }
  double hour_angle = 0.5 * ( h * 60 + m ) ;
  double minute_angle = 6 * m ;
  int angle = abs ( hour_angle - minute_angle ) ;
  angle = min ( 360 - angle , angle ) ;
  return angle ;
}
