void printEqualModNumbers ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  ;
  int d = arr [ n - 1 ] - arr [ 0 ] ;
  ;
  int v [ n ] ;
  int i = 1 ;
  while ( ( i * i <= d ) && ( i != d / i ) ) {
    if ( ( d % i == 0 ) && ( i != d / i ) ) v [ i ] = i ;
    ;
    if ( ( i != d / i ) && ( i != d / i ) ) v [ i ] = d / i ;
    ;
  }
  ;
  for ( ;
  i < v [ 0 ] ;
  i ++ ) {
    int temp = arr [ 0 ] % v [ i ] ;
    ;
    int j = 1 ;
    while ( ( j < n ) && ( arr [ j ] % v [ i ] != temp ) ) break ;
    ;
    j ++ ;
  }
  ;
  if ( ( j == n ) && ( arr [ 0 ] % v [ i ] != temp ) ) cout << v [ i ] << " " ;
  ;
}
