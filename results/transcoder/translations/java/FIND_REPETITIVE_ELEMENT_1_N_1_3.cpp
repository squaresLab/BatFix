int findRepeating ( int arr [ ] , int n ) {
  int missingElement = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int element = arr [ abs ( arr [ i ] ) ] ;
    if ( element < 0 ) {
      missingElement = arr [ i ] ;
      break ;
    }
    arr [ abs ( arr [ i ] ) ] = - arr [ abs ( arr [ i ] ) ] ;
  }
  return abs ( missingElement ) ;
}
