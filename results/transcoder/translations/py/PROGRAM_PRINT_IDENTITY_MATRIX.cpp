void Identity ( int size ) {
  for ( int row = 0 ;
  row <= size ;
  row ++ ) {
    for ( int col = 0 ;
    col <= size ;
    col ++ ) {
      if ( ( row == col ) || ( row == col ) ) {
        cout << "1 " ;
      }
      else {
        cout << "0 " ;
      }
    }
    cout << endl ;
  }
}
