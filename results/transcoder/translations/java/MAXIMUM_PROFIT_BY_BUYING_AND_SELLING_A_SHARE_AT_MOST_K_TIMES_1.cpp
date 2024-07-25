int maxProfit ( int price [ ] , int n , int k ) {
  int profit [ k + 1 ] [ n + 1 ] ;
  for ( int i = 0 ;
  i <= k ;
  i ++ ) {
    profit [ i ] [ 0 ] = 0 ;
  }
  for ( int j = 0 ;
  j <= n ;
  j ++ ) {
    profit [ 0 ] [ j ] = 0 ;
  }
  for ( int i = 1 ;
  i <= k ;
  i ++ ) {
    int prevDiff = INT_MAX ;
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      prevDiff = max ( prevDiff , profit [ i - 1 ] [ j - 1 ] - price [ j - 1 ] ) ;
      profit [ i ] [ j ] = max ( profit [ i ] [ j - 1 ] , price [ j ] + prevDiff ) ;
    }
  }
  return profit [ k ] [ n - 1 ] ;
}
