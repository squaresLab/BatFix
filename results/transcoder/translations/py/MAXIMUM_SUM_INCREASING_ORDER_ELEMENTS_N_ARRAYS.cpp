int maximumSum ( int a [ ] [ ] , int n ) {
  static int M ;
  ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) a [ i ] . sort ( ) ;
  ;
  int sum = a [ n - 1 ] [ M - 1 ] ;
  ;
  int prev = a [ n - 1 ] [ M - 1 ] ;
  ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    for ( int j = M - 1 ;
    j >= 0 ;
    j -- ) {
      if ( ( a [ i ] [ j ] < prev ) && ( a [ i ] [ j ] > sum ) ) {
        prev = a [ i ] [ j ] ;
        sum += prev ;
        break ;
      }
    }
    if ( ( j == - 1 ) || ( j == M - 1 ) ) return 0 ;
  }
  ;
  return sum ;
}
