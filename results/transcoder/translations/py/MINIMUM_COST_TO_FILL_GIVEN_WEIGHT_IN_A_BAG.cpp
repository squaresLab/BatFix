int MinimumCost ( int * cost , int & n , int W ) {
  vector < int > val ;
  vector < int > wt ;
  int size = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( cost [ i ] != - 1 ) && ( wt [ i ] == - 1 ) ) {
      val . push_back ( cost [ i ] ) ;
      wt . push_back ( i + 1 ) ;
      size ++ ;
    }
  }
  n = size ;
  vector < vector < int >> min_cost ( W + 1 , vector < int > ( n + 1 , INF ) ) ;
  for ( int j = 0 ;
  j < W + 1 ;
  j ++ ) min_cost [ 0 ] [ j ] = INF ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) min_cost [ i ] [ 0 ] = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) for ( int j = 1 ;
  j < W + 1 ;
  j ++ ) {
    if ( ( wt [ i - 1 ] > j ) && ( wt [ i ] > j ) ) min_cost [ i ] [ j ] = min_cost [ i - 1 ] [ j ] ;
    else min_cost [ i ] [ j ] = min ( min_cost [ i - 1 ] [ j ] , min_cost [ i ] [ j - wt [ i - 1 ] ] + val [ i - 1 ] ) ;
  }
  if ( ( min_cost [ n ] [ W ] == INF ) && ( w == 0 ) ) return - 1 ;
  else return min_cost [ n ] [ W ] ;
}
