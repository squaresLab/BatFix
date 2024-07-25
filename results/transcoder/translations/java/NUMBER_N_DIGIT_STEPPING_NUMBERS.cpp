long long answer ( int n ) {
  int dp [ n + 1 ] [ 10 ] ;
  if ( n == 1 ) return 10 ;
  for ( int j = 0 ;
  j <= 9 ;
  j ++ ) {
    dp [ 1 ] [ j ] = 1 ;
  }
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= 9 ;
    j ++ ) {
      if ( j == 0 ) {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ] ;
      }
      else if ( j == 9 ) {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] ;
      }
      else {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] ;
      }
    }
  }
  long long sum = 0 ;
  for ( int j = 1 ;
  j <= 9 ;
  j ++ ) {
    sum += dp [ n ] [ j ] ;
  }
  return sum ;
}
