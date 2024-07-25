int findSum ( int n ) {
  int multiTerms = n * ( n + 1 ) / 2 ;
  int sm = multiTerms ;
  foriinrange ( 2 , n + 1 ) {
    multiTerms = multiTerms - ( i - 1 ) ;
    sm = sm + multiTerms * i ;
  }
  returnsm = sm ;
}
