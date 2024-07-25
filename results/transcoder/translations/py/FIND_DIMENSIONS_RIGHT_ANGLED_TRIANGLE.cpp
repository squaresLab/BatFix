void findDimen ( double H , double A ) {
  if ( H * H < 4 * A ) {
    cout << "Not Possible" << endl ;
    return ;
  }
  double apb = sqrt ( H * H + 4 * A ) ;
  double asb = sqrt ( H * H - 4 * A ) ;
  cout << "P = " << "" << ( ( apb - asb ) / 2.0 ) << endl ;
  cout << "B = " << "" << ( ( apb + asb ) / 2.0 ) << endl ;
}
