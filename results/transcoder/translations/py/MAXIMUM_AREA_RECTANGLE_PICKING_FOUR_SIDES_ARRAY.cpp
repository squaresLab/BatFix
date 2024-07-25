int findArea ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int dimension [ 2 ] = {
    0 , 0 }
    ;
    int i = 0 ;
    int j = 0 ;
    while ( ( i < n - 1 && j < 2 ) || ( i < n - 1 && j < 2 ) ) {
      if ( ( arr [ i ] == arr [ i + 1 ] ) || ( arr [ i ] == arr [ i + 1 ] ) ) {
        dimension [ j ] = arr [ i ] ;
        j ++ ;
        i ++ ;
      }
      i ++ ;
    }
    return ( dimension [ 0 ] * dimension [ 1 ] ) ;
  }
  