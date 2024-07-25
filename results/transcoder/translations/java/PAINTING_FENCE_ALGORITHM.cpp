long long countWays ( int n , int k ) {
  long long total = k ;
  int mod = 1000000007 ;
  int same = 0 , diff = k ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    same = diff ;
    diff = ( int ) total * ( k - 1 ) ;
    diff = diff % mod ;
    total = ( same + diff ) % mod ;
  }
  return total ;
}
