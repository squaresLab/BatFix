public : int countP ( int n , int k ) {
  vector < vector < int >> dp ( k + 1 , vector < int > ( k + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) dp [ i ] [ 0 ] = 0 ;
  for ( int i = 0 ;
  i < k + 1 ;
  i ++ ) dp [ 0 ] [ k ] = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) for ( int j = 1 ;
  j <= k ;
  j ++ ) if ( ( j == 1 || i == j ) && ( dp [ i ] [ j ] == 1 ) ) dp [ i ] [ j ] = 1 ;
  else dp [ i ] [ j ] = ( j * dp [ i - 1 ] [ j ] + dp [ i - 1 ] [ j - 1 ] ) ;
  return dp [ n ] [ k ] ;
}
