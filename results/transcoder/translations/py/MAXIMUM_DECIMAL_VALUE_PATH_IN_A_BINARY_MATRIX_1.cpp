int MaximumDecimalValue ( vector < vector < int >> & mat , int n ) {
  vector < vector < int >> dp ( n , vector < int > ( n ) ) ;
  if ( ( mat [ 0 ] [ 0 ] == 1 ) && ( mat [ 0 ] [ 0 ] == 2 ) ) dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( mat [ 0 ] [ i ] == 1 ) && ( mat [ 0 ] [ i - 1 ] == 2 ) ) dp [ 0 ] [ i ] = dp [ 0 ] [ i - 1 ] + 2 * * i ;
    else dp [ 0 ] [ i ] = dp [ 0 ] [ i - 1 ] ;
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( mat [ i ] [ 0 ] == 1 ) && ( mat [ i ] [ 0 ] == 2 ) ) dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ] + 2 * * i ;
  }
  else dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      if ( ( mat [ i ] [ j ] == 1 ) && ( mat [ i ] [ j - 1 ] == 2 ) ) dp [ i ] [ j ] = max ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] ) + ( 2 * * ( i + j ) ) ;
      else dp [ i ] [ j ] = max ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] ) ;
    }
  }
  return dp [ n - 1 ] [ n - 1 ] ;
}
