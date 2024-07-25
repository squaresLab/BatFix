int identity ( int num ) {
  int row , col ;
  for ( row = 0 ;
  row < num ;
  row ++ ) {
    for ( col = 0 ;
    col < num ;
    col ++ ) {
      if ( row == col ) {
        cout << 1 << " " ;
      }
      else {
        cout << 0 << " " ;
      }
    }
    cout << endl ;
  }
  return 0 ;
}
