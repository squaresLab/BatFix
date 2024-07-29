void printInSortedOrder ( int arr [ ] , int n ) {
  int index [ n ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) index [ i ] = i ;
    for ( int i = 0 ;
    i < n - 1 ;
    i ++ ) {
      int min = i ;
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( ( arr [ index [ min ] ] > arr [ index [ j ] ] ) && ( arr [ index [ min ] ] < arr [ j ] ) ) min = j ;
      }
      if ( ( min != i ) || ( index [ min ] > i ) ) index [ min ] = index [ i ] ;
    }
    for ( int i = 0 ;
    i < n ;
    i ++ ) cout << arr [ index [ i ] ] << " " ;
  }

