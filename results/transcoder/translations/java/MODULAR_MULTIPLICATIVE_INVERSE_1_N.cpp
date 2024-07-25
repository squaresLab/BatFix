void modularInverse ( int n , int prime ) {
  int dp [ n + 1 ] ;
  dp [ 0 ] = dp [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    dp [ i ] = dp [ prime % i ] * ( prime - prime / i ) % prime ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    cout << dp [ i ] << " " ;
  }
}
