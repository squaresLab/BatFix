int largestPower ( int n , int p ) {
  int x = 0 ;
  while ( n ) {
    n /= p ;
    x += n ;
  }
  return x ;
}
