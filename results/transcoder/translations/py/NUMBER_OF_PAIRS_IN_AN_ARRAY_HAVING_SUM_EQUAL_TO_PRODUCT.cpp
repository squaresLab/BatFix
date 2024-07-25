int sumEqualProduct ( int a [ ] , int n ) {
  int zero = 0 ;
  int two = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( a [ i ] == 0 ) zero ++ ;
    if ( a [ i ] == 2 ) two ++ ;
  }
  int cnt = ( zero * ( zero - 1 ) ) / 2 + ( two * ( two - 1 ) ) / 2 ;
  return cnt ;
}
