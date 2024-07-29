int findArea ( Integer arr [ ] , int n ) {
  sort ( arr , arr + n , cmp ) ;
  int dimension [ 2 ] = {
    0 , 0 }
    ;
    for ( int i = 0 , j = 0 ;
    i < n - 1 && j < 2 ;
    i ++ ) if ( arr [ i ] == arr [ i + 1 ] ) dimension [ j ++ ] = arr [ i ++ ] ;
    return ( dimension [ 0 ] * dimension [ 1 ] ) ;
  }

