void productArray ( int arr [ ] , int n ) {
  if ( n == 1 ) {
    cout << 0 << endl ;
    return ;
  }
  int i , temp ;
  int prod [ n ] ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    prod [ i ] = 1 ;
    temp *= arr [ i ] ;
  }
  temp = 1 ;
  for ( i = n - 1 ;
  i >= 0 ;
  i -- ) {
    prod [ i ] *= temp ;
    temp *= arr [ i ] ;
  }
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    cout << prod [ i ] << " " ;
  }
  return ;
}
