void findDimen ( int H , int A ) {
  if ( H * H < 4 * A ) {
    cout << "Not Possible" << endl ;
    return ;
  }
  double apb = sqrt ( H * H + 4 * A ) ;
  double asb = sqrt ( H * H - 4 * A ) ;
  cout << "P = " << round ( ( ( apb - asb ) / 2.0 ) * 100.0 ) / 100.0 << endl ;
  cout << "B = " << round ( ( ( apb + asb ) / 2.0 ) * 100.0 ) / 100.0 << endl ;
}
