void solve_word_wrap ( int arr [ ] , int n , int k ) {
  int i , j ;
  int currlen ;
  int cost ;
  int dp [ n ] ;
  int ans [ n ] ;
  dp [ n - 1 ] = 0 ;
  ans [ n - 1 ] = n - 1 ;
  for ( i = n - 2 ;
  i >= 0 ;
  i -- ) {
    currlen = - 1 ;
    dp [ i ] = INT_MAX ;
    for ( j = i ;
    j < n ;
    j ++ ) {
      currlen += ( arr [ j ] + 1 ) ;
      if ( currlen > k ) break ;
      if ( j == n - 1 ) cost = 0 ;
      else cost = ( k - currlen ) * ( k - currlen ) + dp [ j + 1 ] ;
      if ( cost < dp [ i ] ) {
        dp [ i ] = cost ;
        ans [ i ] = j ;
      }
    }
  }
  i = 0 ;
  while ( i < n ) {
    cout << ( i + 1 ) << " " << ( ans [ i ] + 1 ) << " " ;
    i = ans [ i ] + 1 ;
  }
}
