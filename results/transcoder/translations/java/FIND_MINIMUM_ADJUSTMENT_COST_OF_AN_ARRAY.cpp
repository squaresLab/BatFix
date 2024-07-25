int minAdjustmentCost ( int A [ ] , int n , int target ) {
  vector < vector < int >> dp ( n , vector < int > ( M + 1 , 0 ) ) ;
  for ( int j = 0 ;
  j <= M ;
  j ++ ) {
    dp [ 0 ] [ j ] = abs ( j - A [ 0 ] ) ;
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= M ;
    j ++ ) {
      dp [ i ] [ j ] = INT_MAX ;
      int k = max ( j - target , 0 ) ;
      for ( ;
      k <= min ( M , j + target ) ;
      k ++ ) {
        dp [ i ] [ j ] = min ( dp [ i ] [ j ] , dp [ i - 1 ] [ k ] + abs ( A [ i ] - j ) ) ;
      }
    }
  }
  int res = INT_MAX ;
  for ( int j = 0 ;
  j <= M ;
  j ++ ) {
    res = min ( res , dp [ n - 1 ] [ j ] ) ;
  }
  return res ;
}
