int getMissingNo ( vector < int > & A ) {
  int n = A . size ( ) ;
  int total = ( n + 1 ) * ( n + 2 ) / 2 ;
  int sum_of_A = sum ( A ) ;
  return total - sum_of_A ;
}
