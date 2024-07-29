bool checkReverse ( int arr [ ] , int n ) {
  int temp [ n ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) temp [ i ] = arr [ i ] ;
    sort ( temp , temp + n ) ;
    for ( int front = 0 ;
    front < n ;
    front ++ ) if ( temp [ front ] != arr [ front ] ) break ;
    for ( int back = n - 1 ;
    back >= 0 ;
    back -- ) if ( temp [ back ] != arr [ back ] ) break ;
    if ( front >= back ) return true ;
    while ( front != back ) {
      front ++ ;
      if ( arr [ front - 1 ] < arr [ front ] ) return false ;
    }
    return true ;
  }

