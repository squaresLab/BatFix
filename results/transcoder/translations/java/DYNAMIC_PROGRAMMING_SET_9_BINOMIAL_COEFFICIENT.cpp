int binomial_coeff ( int n , int k ) {
  if ( k == 0 || k == n ) return 1 ;
  return binomial_coeff ( n - 1 , k - 1 ) + binomial_coeff ( n - 1 , k ) ;
}
