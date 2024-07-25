int maximumSum ( int a [ ] [ M ] , int n ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sort ( a + i , a + n ) ;
  }
  int sum = a [ n - 1 ] [ M - 1 ] ;
  int prev = a [ n - 1 ] [ M - 1 ] ;
  int i , j ;
  for ( i = n - 2 ;
  i >= 0 ;
  i -- ) {
    for ( j = M - 1 ;
    j >= 0 ;
    j -- ) {
      if ( a [ i ] [ j ] < prev ) {
        prev = a [ i ] [ j ] ;
        sum += prev ;
        break ;
      }
    }
    if ( j == - 1 ) return 0 ;
  }
  return sum ;
}
