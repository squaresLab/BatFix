int findMaxGCD ( int arr [ ] , int n ) {
  int high = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) high = max ( high , arr [ i ] ) ;
  int count [ n + 1 ] = {
    0 }
    ;
    for ( int i = 0 ;
    i <= n ;
    i ++ ) count [ arr [ i ] ] ++ ;
    int counter = 0 ;
    for ( int i = high ;
    i > 0 ;
    i -- ) {
      int j = i ;
      while ( ( j <= high ) && ( count [ j ] > 0 ) ) {
        if ( ( count [ j ] > 0 ) || ( count [ j ] < 0 ) ) {
          counter += count [ j ] ;
        }
        j += i ;
        if ( ( counter == 2 ) || ( count [ j ] < 0 ) ) {
          return i ;
        }
      }
      counter = 0 ;
    }
    return 0 ;
  }
  