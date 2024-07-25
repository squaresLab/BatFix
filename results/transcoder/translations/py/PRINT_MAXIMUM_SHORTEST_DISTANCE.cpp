public : int findMaximum ( vector < int > a , int n , int k ) {
  map < int , int > b ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int x = a [ i ] ;
    int d = min ( 1 + i , n - i ) ;
    if ( x != 0 ) b [ x ] = d ;
    else b [ x ] = min ( d , b [ x ] ) ;
  }
  int ans = 10 * * 9 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int x = a [ i ] ;
    if ( ( x != ( k - x ) && ( k - x ) < b . size ( ) ) || ( x < 0 ) ) ans = min ( max ( b [ x ] , b [ k - x ] ) , ans ) ;
  }
  return ans ;
}
