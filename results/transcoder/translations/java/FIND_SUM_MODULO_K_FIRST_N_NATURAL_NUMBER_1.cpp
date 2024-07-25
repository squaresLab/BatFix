int findSum ( int N , int K ) {
  int ans = 0 ;
  int y = N / K ;
  int x = N % K ;
  ans = ( K * ( K - 1 ) / 2 ) * y + ( x * ( x + 1 ) ) / 2 ;
  return ans ;
}
