int findSum ( int N , int K ) {
  double ans ;
  double y = N / K ;
  double x = N % K ;
  ans = ( ( K * ( K - 1 ) / 2 ) * y + ( x * ( x + 1 ) ) / 2 ) ;
  return ( int ) ans ;
}
