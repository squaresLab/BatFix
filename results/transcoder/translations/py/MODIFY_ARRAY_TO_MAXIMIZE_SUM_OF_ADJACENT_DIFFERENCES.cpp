public : int maximumDifferenceSum ( int arr [ ] , int N ) {
  vector < vector < int >> dp ( N ) ;
  dp [ 0 ] . clear ( ) ;
  dp [ 0 ] . push_back ( 0 ) ;
  dp [ 0 ] . push_back ( 1 ) ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) dp [ i ] . push_back ( dp [ i ] . back ( ) ) ;
  for ( int i = 0 ;
  i < N - 1 ;
  i ++ ) {
    dp [ i + 1 ] . push_back ( max ( dp [ i ] . front ( ) , dp [ i ] . back ( ) + abs ( 1 - arr [ i ] ) ) ) ;
    dp [ i + 1 ] . push_back ( max ( dp [ i ] . front ( ) + abs ( arr [ i + 1 ] - 1 ) , dp [ i ] . back ( ) + abs ( arr [ i + 1 ] - arr [ i ] ) ) ) ;
  }
  return max ( dp [ N - 1 ] . front ( ) , dp [ N - 1 ] . back ( ) ) ;
}
