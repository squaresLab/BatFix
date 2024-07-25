public : int eulerian ( int n , int m ) {
  vector < vector < int >> dp ( n + 1 , vector < int > ( m + 1 , 0 ) ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= m ;
    j ++ ) {
      if ( i > j ) {
        if ( j == 0 ) {
          dp [ i ] [ j ] = 1 ;
        }
        else {
          dp [ i ] [ j ] = ( ( i - j ) * dp [ i - 1 ] [ j - 1 ] ) + ( ( j + 1 ) * dp [ i - 1 ] [ j ] ) ;
        }
      }
    }
  }
  return dp [ n ] [ m ] ;
}
