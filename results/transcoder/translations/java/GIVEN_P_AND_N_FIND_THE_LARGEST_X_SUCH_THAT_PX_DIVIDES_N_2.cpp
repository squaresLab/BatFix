int Largestpower ( int n , int p ) {
  int ans = 0 ;
  while ( n ) {
    n /= p ;
    ans += n ;
  }
  return ans ;
}
