int find_maximum ( int a [ ] , int n , int k ) {
  unordered_map < int , int > b ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int x = a [ i ] ;
    int d = min ( 1 + i , n - i ) ;
    if ( ! b . count ( x ) ) {
      b [ x ] = d ;
    }
    else {
      b [ x ] = min ( d , b [ x ] ) ;
    }
  }
  int ans = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int x = a [ i ] ;
    if ( x != k - x && b . count ( k - x ) ) {
      ans = min ( max ( b [ x ] , b [ k - x ] ) , ans ) ;
    }
  }
  return ans ;
}
