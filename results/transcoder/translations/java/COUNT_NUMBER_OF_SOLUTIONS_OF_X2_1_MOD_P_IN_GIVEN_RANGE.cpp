int findCountOfSolutions ( int n , int p ) {
  int ans = 0 ;
  for ( int x = 1 ;
  x < p ;
  x ++ ) {
    if ( ( x * x ) % p == 1 ) {
      int last = x + p * ( n / p ) ;
      if ( last > n ) last -= p ;
      ans += ( ( last - x ) / p + 1 ) ;
    }
  }
  return ans ;
}
