int MinimumCost ( int cost [ ] , int & n , int W ) {
  Vector < int > val ;
  Vector < int > wt ;
  int size = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( cost [ i ] != - 1 ) {
      val . push_back ( cost [ i ] ) ;
      wt . push_back ( i + 1 ) ;
      size ++ ;
    }
  }
  n = size ;
  int min_cost [ n + 1 ] [ W + 1 ] ;
  for ( int i = 0 ;
  i <= W ;
  i ++ ) {
    min_cost [ 0 ] [ i ] = INT_MAX ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    min_cost [ i ] [ 0 ] = 0 ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= W ;
    j ++ ) {
      if ( wt [ i - 1 ] > j ) {
        min_cost [ i ] [ j ] = min_cost [ i - 1 ] [ j ] ;
      }
      else {
        min_cost [ i ] [ j ] = min ( min_cost [ i - 1 ] [ j ] , min_cost [ i ] [ j - wt [ i - 1 ] ] + val [ i - 1 ] ) ;
      }
    }
  }
  return ( min_cost [ n ] [ W ] == INT_MAX ) ? - 1 : min_cost [ n ] [ W ] ;
}
