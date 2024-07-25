public : int maxProfit ( vector < int > & price , int n , int k ) {
  vector < vector < int >> profit ( n + 1 , vector < int > ( k + 1 , 0 ) ) ;
  for ( int i = 1 ;
  i <= k ;
  i ++ ) {
    double prevDiff = numeric_limits < double > :: infinity ( ) ;
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      prevDiff = max ( prevDiff , profit [ i - 1 ] [ j - 1 ] - price [ j - 1 ] ) ;
      profit [ i ] [ j ] = max ( profit [ i ] [ j - 1 ] , price [ j ] + prevDiff ) ;
    }
  }
  return profit [ k ] [ n - 1 ] ;
}
