int maxProductSubset ( int a [ ] , int n ) {
  if ( n == 1 ) return a [ 0 ] ;
  int max_neg = INT_MAX ;
  int count_neg = 0 , count_zero = 0 ;
  int prod = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( a [ i ] == 0 ) {
      count_zero ++ ;
      continue ;
    }
    if ( a [ i ] < 0 ) {
      count_neg ++ ;
      max_neg = max ( max_neg , a [ i ] ) ;
    }
    prod = prod * a [ i ] ;
  }
  if ( count_zero == n ) return 0 ;
  if ( count_neg % 2 == 1 ) {
    if ( count_neg == 1 && count_zero > 0 && count_zero + count_neg == n ) return 0 ;
    prod = prod / max_neg ;
  }
  return prod ;
}
