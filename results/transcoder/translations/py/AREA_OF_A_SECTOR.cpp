void SectorArea ( int radius , int angle ) {
  const int pi = 22 / 7 ;
  if ( angle >= 360 ) {
    cout << "Angle not possible" << endl ;
    return ;
  }
  else {
    int sector = ( pi * radius * * 2 ) * ( angle / 360 ) ;
    cout << sector << endl ;
    return ;
  }
}
