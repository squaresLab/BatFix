void sortSquares ( int arr [ ] ) {
  int n = arr . size ( ) ;
  int k ;
  for ( k = 0 ;
  k < n ;
  k ++ ) {
    if ( arr [ k ] >= 0 ) break ;
  }
  int i = k - 1 ;
  int j = k ;
  int ind = 0 ;
  int temp [ n ] ;
  while ( i >= 0 && j < n ) {
    if ( arr [ i ] * arr [ i ] < arr [ j ] * arr [ j ] ) {
      temp [ ind ] = arr [ i ] * arr [ i ] ;
      i -- ;
    }
    else {
      temp [ ind ] = arr [ j ] * arr [ j ] ;
      j ++ ;
    }
    ind ++ ;
  }
  while ( i >= 0 ) {
    temp [ ind ++ ] = arr [ i ] * arr [ i ] ;
    i -- ;
  }
  while ( j < n ) {
    temp [ ind ++ ] = arr [ j ] * arr [ j ] ;
    j ++ ;
  }
  for ( int x = 0 ;
  x < n ;
  x ++ ) {
    arr [ x ] = temp [ x ] ;
  }
}
