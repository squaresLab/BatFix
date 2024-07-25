void fitOrNotFit ( int R , int r , int x , int y , int rad ) {
  double val = sqrt ( pow ( x , 2 ) + pow ( y , 2 ) ) ;
  if ( val + rad <= R && val - rad >= R - r ) {
    cout << "Fits" << endl ;
  }
  else {
    cout << "Doesn't Fit" << endl ;
  }
}
