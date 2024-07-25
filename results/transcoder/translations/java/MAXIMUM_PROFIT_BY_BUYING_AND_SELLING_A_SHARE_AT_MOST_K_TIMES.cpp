int maxProfit ( vector < int > price , int n , int k ) {
  vector < vector < int >> profit ( k + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i <= k ;
  i ++ ) {
    profit [ i ] . push_back ( 0 ) ;
  }
  for ( int j = 0 ;
  j <= n ;
  j ++ ) {
    profit [ 0 ] . push_back ( j ) ;
  }
  for ( int i = 1 ;
  i <= k ;
  i ++ ) {
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      int max_so_far = 0 ;
      for ( int m = 0 ;
      m < j ;
      m ++ ) {
        max_so_far = max ( max_so_far , price [ j ] - price [ m ] + profit [ i - 1 ] [ m ] ) ;
      }
      profit [ i ] [ j ] = max ( profit [ i ] [ j - 1 ] , max_so_far ) ;
    }
  }
  return profit [ k ] [ n - 1 ] ;
}
