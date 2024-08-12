void sortArray ( int arr [ ] , int n , int A , int B , int C ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = ( A * arr [ i ] * arr [ i ] + B * arr [ i ] + C ) ;
  int index = - ( INT_MAX - 1 ) ;
  int maximum = - ( INT_MAX - 1 ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( maximum < arr [ i ] ) {
    index = i ;
    maximum = arr [ i ] ;
  }
  int i = 0 ;
  ;
  int j = n - 1 ;
  int new_arr [ n ] = {
    0 }
    ;
    int k = 0 ;
    while ( i < index && j > index ) {
      if ( arr [ i ] < arr [ j ] ) {
        new_arr [ k ] = arr [ i ] ;
        k ++ ;
        i ++ ;
      }
      else {
        new_arr [ k ] = arr [ j ] ;
        k ++ ;
        j -- ;
      }
    }
    while ( i < index ) {
      new_arr [ k ] = arr [ i ] ;
      k ++ ;
      i ++ ;
    }
    while ( j > index ) {
      new_arr [ k ] = arr [ j ] ;
      k ++ ;
      j -- ;
      new_arr [ n - 1 ] = maximum ;
    }
    for ( int i = 0 ;
    i < n ;
    i ++ ) arr [ i ] = new_arr [ i ] ;
  }
