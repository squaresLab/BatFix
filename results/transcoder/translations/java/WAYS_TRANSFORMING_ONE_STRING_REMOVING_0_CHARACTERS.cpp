int countTransformation ( string a , string b ) {
  int n = a . size ( ) , m = b . size ( ) ;
  if ( m == 0 ) {
    return 1 ;
  }
  int dp [ m + 1 ] [ n + 1 ] ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = i ;
    j < n ;
    j ++ ) {
      if ( i == 0 ) {
        if ( j == 0 ) {
          dp [ i ] [ j ] = ( a [ j ] == b [ i ] ) ? 1 : 0 ;
        }
        else if ( a [ j ] == b [ i ] ) {
          dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + 1 ;
        }
        else {
          dp [ i ] [ j ] = dp [ i ] [ j - 1 ] ;
        }
      }
      else if ( a [ j ] == b [ i ] ) {
        dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + dp [ i - 1 ] [ j - 1 ] ;
      }
      else {
        dp [ i ] [ j ] = dp [ i ] [ j - 1 ] ;
      }
    }
  }
  return dp [ m - 1 ] [ n - 1 ] ;
}
