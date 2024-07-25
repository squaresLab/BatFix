void fitOrNotFit ( double R , double r , double x , double y , double rad ) {
  double val = sqrt ( pow ( x , 2 ) + pow ( y , 2 ) ) ;
  if ( ( val + rad <= R && val - rad >= R - r ) || ( val - rad >= R - r ) ) cout << "Fits\n" ;
  else cout << "Doesn't Fit\n" ;
}
