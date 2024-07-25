void print_sequence ( int n , int k ) {
  int b = ( int ) ( n / ( k * ( k + 1 ) / 2 ) ) ;
  ;
  if ( b == 0 ) cout << "-1" << endl ;
  else {
    int r = 1 ;
    int x = 1 ;
    while ( x * * 2 <= n ) {
      if ( n % x != 0 ) continue ;
      ;
      else if ( x <= b && x > r ) r = x ;
      else if ( n / x <= b && n / x > r ) r = n / x ;
      x = x + 1 ;
    }
    int i = 1 ;
    while ( i < k ) {
      cout << r * i << " " ;
      i = i + 1 ;
    }
    int last_term = n - ( r * ( k * ( k - 1 ) / 2 ) ) ;
    cout << last_term << endl ;
  }
}
