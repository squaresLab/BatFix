long long square_root ( int n ) {
  int x = n ;
  int y = 1 ;
  while ( x > y ) {
    x = ( x + y ) / 2 ;
    y = n / x ;
  }
  return ( long long ) x ;
}
