int countNonDecreasing ( int n ) {
  const int N = 10 ;
  int count = 1 ;
  for ( int i = 1 ;
  i <= n ;
  ++ i ) {
    count = ( int ) ( count * ( N + i - 1 ) ) ;
    count = ( int ) ( count / i ) ;
  }
  return count ;
}
