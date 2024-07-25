int minTime ( int n , int k , int a [ ] ) {
  int temp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( a [ i ] < a [ j ] ) {
        temp = a [ i ] ;
        a [ i ] = a [ j ] ;
        a [ j ] = temp ;
      }
    }
  }
  int minTime = 0 ;
  for ( int i = 0 ;
  i < n ;
  i += k ) {
    minTime += ( 2 * a [ i ] ) ;
  }
  return minTime ;
}
