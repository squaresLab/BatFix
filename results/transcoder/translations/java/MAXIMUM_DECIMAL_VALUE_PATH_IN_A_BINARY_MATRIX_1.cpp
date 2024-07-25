int MaximumDecimalValue ( int mat [ ] [ 2 ] , int n ) {
  int dp [ n ] [ n ] ;
  if ( mat [ 0 ] [ 0 ] == 1 ) dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( mat [ 0 ] [ i ] == 1 ) dp [ 0 ] [ i ] = ( int ) ( dp [ 0 ] [ i - 1 ] + pow ( 2 , i ) ) ;
    else dp [ 0 ] [ i ] = dp [ 0 ] [ i - 1 ] ;
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( mat [ i ] [ 0 ] == 1 ) dp [ i ] [ 0 ] = ( int ) ( dp [ i - 1 ] [ 0 ] + pow ( 2 , i ) ) ;
    else dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ] ;
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      if ( mat [ i ] [ j ] == 1 ) dp [ i ] [ j ] = ( int ) ( max ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] ) + pow ( 2 , i + j ) ) ;
      else dp [ i ] [ j ] = max ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] ) ;
    }
  }
  return dp [ n - 1 ] [ n - 1 ] ;
}
