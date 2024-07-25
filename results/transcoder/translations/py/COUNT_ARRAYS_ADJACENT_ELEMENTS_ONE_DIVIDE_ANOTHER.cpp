public : int numofArray ( int n , int m ) {
  vector < vector < int >> dp ( MAX ) ;
  vector < vector < int >> di ( MAX ) ;
  vector < vector < int >> mu ( MAX ) ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( int j = 2 * i ;
    j <= m ;
    j += i ) {
      di [ j ] . push_back ( i ) ;
      mu [ i ] . push_back ( j ) ;
    }
    di [ i ] . push_back ( i ) ;
  }
  for ( int i = 1 ;
  i <= m ;
  i ++ ) dp [ 1 ] [ i ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) for ( int j = 1 ;
  j <= m ;
  j ++ ) {
    dp [ i ] [ j ] = 0 ;
    for ( int x = 0 ;
    x < di [ j ] . size ( ) ;
    x ++ ) dp [ i ] [ j ] += dp [ i - 1 ] [ x ] ;
    for ( int x = 0 ;
    x < mu [ j ] . size ( ) ;
    x ++ ) dp [ i ] [ j ] += dp [ i - 1 ] [ x ] ;
  }
  int ans = 0 ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    ans += dp [ n ] [ i ] ;
    di [ i ] . clear ( ) ;
    mu [ i ] . clear ( ) ;
  }
  return ans ;
}
