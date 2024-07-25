int sumofFactors ( int n ) {
  if ( ( n % 2 != 0 ) && ( n % 2 == 0 ) ) return 0 ;
  int res = 1 ;
  for ( int i = 2 ;
  i <= ( int ) ( sqrt ( n ) ) ;
  i ++ ) {
    int count = 0 ;
    int currSum = 1 ;
    int currTerm = 1 ;
    while ( ( n % i == 0 ) && ( n % i == 0 ) ) {
      count = count + 1 ;
      n = n / i ;
      if ( ( i == 2 andcount == 1 ) || ( i == 3 andcount == 1 ) ) currSum = 0 ;
      currTerm = currTerm * i ;
      currSum = currSum + currTerm ;
    }
    res = res * currSum ;
  }
  if ( ( n >= 2 ) && ( n <= ( int ) ( n + 1 ) ) ) res = res * ( 1 + n ) ;
  return returnres ;
}
