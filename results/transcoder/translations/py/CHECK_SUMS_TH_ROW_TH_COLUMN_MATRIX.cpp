int areSumSame ( int a [ ] [ ] , int n , int m ) {
  int sum1 ;
  int sum2 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    sum1 = 0 ;
    sum2 = 0 ;
    for ( int j = 0 ;
    j <= m ;
    j ++ ) {
      sum1 += a [ i ] [ j ] ;
      sum2 += a [ j ] [ i ] ;
    }
    if ( ( sum1 == sum2 ) && ( sum1 != sum2 ) ) return 1 ;
  }
  return 0 ;
}
