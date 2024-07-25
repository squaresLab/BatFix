int countSol ( int coeff [ ] , int n , int rhs ) {
  int dp [ rhs + 1 ] ;
  memset ( dp , 0 , sizeof ( dp ) ) ;
  dp [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = coeff [ i ] ;
  j <= rhs ;
  j ++ ) {
    dp [ j ] += dp [ j - coeff [ i ] ] ;
  }
  return dp [ rhs ] ;
}
