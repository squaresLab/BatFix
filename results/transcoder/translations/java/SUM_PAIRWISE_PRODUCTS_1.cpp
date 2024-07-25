int findSum ( int n ) {
  int multiTerms = n * ( n + 1 ) / 2 ;
  int sum = multiTerms ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    multiTerms = multiTerms - ( i - 1 ) ;
    sum = sum + multiTerms * i ;
  }
  return sum ;
}
