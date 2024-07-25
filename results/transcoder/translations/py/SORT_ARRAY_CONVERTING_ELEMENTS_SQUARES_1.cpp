void sortSquares ( int arr [ ] , int n ) {
  int K ;
  for ( K = 0 ;
  K < n ;
  K ++ ) if ( ( arr [ K ] >= 0 ) && ( arr [ K ] < arr [ K + 1 ] ) ) break ;
  int i = K - 1 ;
  int j = K ;
  int ind = 0 ;
  int temp [ n ] ;
  while ( ( i >= 0 && j < n ) || ( i < j && arr [ i ] < arr [ j ] ) ) {
    if ( ( arr [ i ] * arr [ i ] < arr [ j ] * arr [ j ] ) || ( arr [ i ] * arr [ j ] > arr [ j ] * arr [ j ] ) ) {
      temp [ ind ] = arr [ i ] * arr [ i ] ;
      i -- ;
    }
    else {
      temp [ ind ] = arr [ j ] * arr [ j ] ;
      j ++ ;
    }
    ind ++ ;
  }
  while ( ( i >= 0 ) || ( j < n && arr [ i ] < arr [ j ] ) ) {
    temp [ ind ] = arr [ j ] * arr [ j ] ;
    j ++ ;
    ind ++ ;
  }
  for ( i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = temp [ i ] ;
}
