void print_sequence ( int n , int k ) {
  int b = n / ( k * ( k + 1 ) / 2 ) ;
  if ( b == 0 ) {
    cout << "-1" << endl ;
  }
  else {
    int r = 1 ;
    for ( int x = 1 ;
    x * x <= n ;
    x ++ ) {
      if ( n % x != 0 ) continue ;
      if ( x <= b && x > r ) r = x ;
      if ( n / x <= b && n / x > r ) r = n / x ;
    }
    for ( int i = 1 ;
    i < k ;
    i ++ ) {
      cout << r * i << " " ;
    }
    int res = n - ( r * ( k * ( k - 1 ) / 2 ) ) ;
    cout << res << endl ;
  }
}
