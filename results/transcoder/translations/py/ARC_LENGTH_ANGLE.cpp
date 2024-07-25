double arcLength ( double diameter , double angle ) {
  if ( angle >= 360 ) {
    cout << "Angle cannot be formed" << endl ;
    return 0 ;
  }
  else {
    double arc = ( 3.142857142857143 * diameter ) * ( angle / 360.0 ) ;
    return arc ;
  }
}
