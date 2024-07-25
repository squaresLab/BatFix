public : int minInitialPoints ( vector < vector < int >> & points ) {
  vector < vector < int >> dp ( C + 1 , vector < int > ( R + 1 , 0 ) ) ;
  int m = R , n = C ;
  if ( points [ m - 1 ] [ n - 1 ] > 0 ) dp [ m - 1 ] [ n - 1 ] = 1 ;
  else dp [ m - 1 ] [ n - 1 ] = abs ( points [ m - 1 ] [ n - 1 ] ) + 1 ;
  for ( int i = m - 2 ;
  i >= 0 ;
  i -- ) dp [ i ] [ n - 1 ] = max ( dp [ i + 1 ] [ n - 1 ] - points [ i ] [ n - 1 ] , 1 ) ;
  for ( int i = 2 ;
  i >= 0 ;
  i -- ) dp [ m - 1 ] [ i ] = max ( dp [ m - 1 ] [ i + 1 ] - points [ m - 1 ] [ i ] , 1 ) ;
  for ( int i = m - 2 ;
  i >= 0 ;
  i -- ) for ( int j = n - 2 ;
  j >= 0 ;
  j -- ) {
    int minPointsOnExit = min ( dp [ i + 1 ] [ j ] , dp [ i ] [ j + 1 ] ) ;
    dp [ i ] [ j ] = max ( minPointsOnExit - points [ i ] [ j ] , 1 ) ;
  }
  return dp [ 0 ] [ 0 ] ;
}
