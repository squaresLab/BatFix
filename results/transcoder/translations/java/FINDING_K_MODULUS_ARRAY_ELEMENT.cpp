void printEqualModNumbers ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int d = arr [ n - 1 ] - arr [ 0 ] ;
  Vector < int > v ;
  for ( int i = 1 ;
  i * i <= d ;
  i ++ ) {
    if ( d % i == 0 ) {
      v . push_back ( i ) ;
      if ( i != d / i ) {
        v . push_back ( d / i ) ;
      }
    }
  }
  for ( int i = 0 ;
  i < v . size ( ) ;
  i ++ ) {
    int temp = arr [ 0 ] % v [ i ] ;
    int j ;
    for ( j = 1 ;
    j < n ;
    j ++ ) if ( arr [ j ] % v [ i ] != temp ) break ;
    if ( j == n ) cout << v [ i ] << " " ;
  }
}
