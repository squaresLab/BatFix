bool checkReverse ( int arr [ ] , int n ) {
  int temp [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) temp [ i ] = arr [ i ] ;
  sort ( temp , temp + n ) ;
  int front ;
  for ( front = 0 ;
  front < n ;
  front ++ ) {
    if ( temp [ front ] != arr [ front ] ) break ;
  }
  int back ;
  for ( back = n - 1 ;
  back >= 0 ;
  back -- ) {
    if ( temp [ back ] != arr [ back ] ) break ;
  }
  if ( front >= back ) return true ;
  do {
    front ++ ;
    if ( arr [ front - 1 ] < arr [ front ] ) return false ;
  }
  while ( front != back ) ;
  return true ;
}
