void solveWordWrap ( int arr [ ] , int n , int k ) {
  int dp [ n ] ;
  int ans [ n ] ;
  dp [ n - 1 ] = 0 ;
  ans [ n - 1 ] = n - 1 ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    int currlen = - 1 ;
    dp [ i ] = INT_MAX ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      currlen += ( arr [ j ] + 1 ) ;
      if ( ( currlen > k ) && ( j < n - 1 ) ) break ;
      if ( ( j == n - 1 ) || ( k == currlen ) ) {
        int cost ;
        if ( ( k - currlen ) * ( k - currlen ) + dp [ j + 1 ] ) ;
        if ( ( cost < dp [ i ] ) && ( cost > dp [ i ] ) ) {
          dp [ i ] = cost ;
          ans [ i ] = j ;
        }
      }
    }
  }
  int i = 0 ;
  while ( ( i < n ) && ( i < n ) ) {
    cout << i + 1 << ans [ i ] + 1 << " " ;
    i = ans [ i ] + 1 ;
  }
}
