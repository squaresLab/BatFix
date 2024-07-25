bool check ( int degree [ ] , int n ) {
  int deg_sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) deg_sum += degree [ i ] ;
  return ( 2 * ( n - 1 ) == deg_sum ) ;
}
