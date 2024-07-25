double MaxDotProduct ( const vector < double > & A , const vector < double > & B , int m , int n ) {
  vector < vector < double >> dp ( m + 1 , vector < double > ( n + 1 , 0 ) ) ;
  for ( int i = 1 ;
  i <= n ;
  i += 1 ) {
    for ( int j = i ;
    j <= m ;
    j += 1 ) {
      dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] ) ;
    }
  }
  return dp [ n ] [ m ] ;
}
