int minProductSubset ( int a [ ] , int n ) {
  if ( n == 1 ) return a [ 0 ] ;
  int negmax = INT_MAX ;
  int posmin = INT_MAX ;
  int count_neg = 0 , count_zero = 0 ;
  int product = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( a [ i ] == 0 ) {
      count_zero ++ ;
      continue ;
    }
    if ( a [ i ] < 0 ) {
      count_neg ++ ;
      negmax = max ( negmax , a [ i ] ) ;
    }
    if ( a [ i ] > 0 && a [ i ] < posmin ) {
      posmin = a [ i ] ;
    }
    product *= a [ i ] ;
  }
  if ( count_zero == n || ( count_neg == 0 && count_zero > 0 ) ) return 0 ;
  if ( count_neg == 0 ) return posmin ;
  if ( count_neg % 2 == 0 && count_neg != 0 ) product = product / negmax ;
  return product ;
}
