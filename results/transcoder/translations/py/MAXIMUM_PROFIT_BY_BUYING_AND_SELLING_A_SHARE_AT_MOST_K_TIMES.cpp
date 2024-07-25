public : int maxProfit ( vector < int > & prices , int n , int k ) {
  vector < vector < int >> profit ( k + 1 , vector < int > ( k + 1 , 0 ) ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= k ;
    j ++ ) {
      int maxSoFar = 0 ;
      for ( int l = 0 ;
      l < i ;
      l ++ ) {
        maxSoFar = max ( maxSoFar , prices [ i ] - prices [ l ] + profit [ l ] [ j - 1 ] ) ;
      }
      profit [ i ] [ j ] = max ( profit [ i - 1 ] [ j ] , maxSoFar ) ;
    }
  }
  return profit [ n - 1 ] [ k ] ;
}
