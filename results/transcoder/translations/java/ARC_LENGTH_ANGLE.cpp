double arcLength ( double diameter , double angle ) {
  double pi = 22.0 / 7.0 ;
  double arc ;
  if ( angle >= 360 ) {
    cout << "Angle cannot" << " be formed" << endl ;
    return 0 ;
  }
  else {
    arc = ( pi * diameter ) * ( angle / 360.0 ) ;
    return arc ;
  }
}
