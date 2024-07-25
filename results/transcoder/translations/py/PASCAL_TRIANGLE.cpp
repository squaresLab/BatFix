void printPascal ( int n ) {
  int arr [ n ] [ n ] ;
  for ( int y = 0 ;
  y <= n ;
  y ++ ) {
    for ( int line = 0 ;
    line <= n ;
    line ++ ) {
      if ( ( i == 0 || i == line ) && ( y == 0 || y == line ) ) {
        arr [ line ] [ i ] = 1 ;
        cout << arr [ line ] [ i ] << " " ;
      }
      else {
        arr [ line ] [ i ] = ( arr [ line - 1 ] [ i - 1 ] + arr [ line - 1 ] [ i ] ) ;
        cout << arr [ line ] [ i ] << " " ;
      }
    }
    cout << "\n" << "" << endl ;
  }
}
