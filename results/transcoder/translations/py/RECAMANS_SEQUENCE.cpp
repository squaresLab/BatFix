void recaman ( int n ) {
  int arr [ n ] = {
    0 }
    ;
    arr [ 0 ] = 0 ;
    cout << arr [ 0 ] << ", " ;
    for ( int i = 1 ;
    i < n ;
    i ++ ) {
      int curr = arr [ i - 1 ] - i ;
      for ( int j = 0 ;
      j <= i ;
      j ++ ) {
        if ( ( ( arr [ j ] == curr ) || curr < 0 ) && ( arr [ j ] == curr ) ) {
          curr = arr [ i - 1 ] + i ;
          break ;
        }
      }
      arr [ i ] = curr ;
      cout << arr [ i ] << ", " ;
    }
  }
