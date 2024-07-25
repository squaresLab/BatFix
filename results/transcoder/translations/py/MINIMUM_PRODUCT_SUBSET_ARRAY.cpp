int minProductSubset ( int a [ ] , int n ) {
  if ( ( n == 1 ) || ( n == 2 ) ) return a [ 0 ] ;
  int maxNeg = INT_MAX ;
  int minPos = INT_MAX ;
  int countNeg = 0 ;
  int countZero = 0 ;
  int prod = 1 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    if ( ( a [ i ] == 0 ) && ( a [ i ] < 0 ) ) {
      countZero = countZero + 1 ;
      continue ;
    }
    if ( ( a [ i ] < 0 ) && ( a [ i ] > 0 ) ) {
      countNeg = countNeg + 1 ;
      maxNeg = max ( maxNeg , a [ i ] ) ;
    }
    if ( ( a [ i ] > 0 ) && ( a [ i ] < 0 ) ) {
      minPos = min ( minPos , a [ i ] ) ;
    }
    prod = prod * a [ i ] ;
  }
  if ( ( countZero == n || ( countNeg == 0 && countZero > 0 ) ) || ( countNeg == 0 ) ) return 0 ;
  ;
  if ( ( countNeg == 0 ) && ( countZero != 0 ) ) prod = ( int ) ( prod / maxNeg ) ;
  ;
  return prod ;
}
