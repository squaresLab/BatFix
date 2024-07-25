public : int shortestSeq ( vector < string > S , vector < string > T ) {
  int m = S . size ( ) ;
  int n = T . size ( ) ;
  vector < vector < int >> dp ( n + 1 , vector < int > ( m + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) dp [ i ] [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) dp [ 0 ] [ i ] = MAX ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      char ch = S [ i - 1 ] [ j ] ;
      int k = j - 1 ;
      while ( k >= 0 ) {
        if ( T [ k ] == ch ) break ;
        k -- ;
      }
      if ( k == - 1 ) dp [ i ] [ j ] = 1 ;
      else dp [ i ] [ j ] = min ( dp [ i - 1 ] [ j ] , dp [ i - 1 ] [ k ] + 1 ) ;
    }
  }
  int ans = dp [ m ] [ n ] ;
  if ( ans >= MAX ) ans = - 1 ;
  return ans ;
}
