int findCountOfSolutions ( int n , int p ) {
  double ans = 0 ;
  ;
  for ( int x = 1 ;
  x <= p ;
  x ++ ) {
    if ( ( ( x * x ) % p == 1 ) && ( ( x * x ) % p == 1 ) ) {
      double last = x + p * ( n / p ) ;
      ;
      if ( ( last > n ) && ( last > p ) ) last -= p ;
      ans += ( ( last - x ) / p + 1 ) ;
    }
  }
  return ( int ) ans ;
}
