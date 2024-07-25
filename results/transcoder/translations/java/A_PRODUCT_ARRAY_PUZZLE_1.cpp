void productArray ( int arr [ ] , int n ) {
  if ( n == 1 ) {
    cout << "0" << endl ;
    return ;
  }
  int i , temp = 1 ;
  int prod [ n ] ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    prod [ j ] = 1 ;
  }
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    prod [ i ] = temp ;
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
