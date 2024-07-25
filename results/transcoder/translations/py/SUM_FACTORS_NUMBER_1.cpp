public : int sumofFactors ( int n ) {
  int res = 1 ;
  for ( int i = 2 ;
  i <= ( int ) ( m . sqrt ( n ) + 1 ) ;
  i ++ ) {
    int currSum = 1 ;
    int currTerm = 1 ;
    while ( n % i == 0 ) {
      n = n / i ;
      ;
      currTerm = currTerm * i ;
      ;
      currSum += currTerm ;
      ;
    }
    res = res * currSum ;
  }
  if ( n > 2 ) res = res * ( 1 + n ) ;
  return res ;
}
