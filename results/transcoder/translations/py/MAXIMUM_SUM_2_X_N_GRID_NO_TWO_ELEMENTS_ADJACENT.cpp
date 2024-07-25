int maxSum ( vector < vector < int >> & grid , int n ) {
  int incl = max ( grid [ 0 ] [ 0 ] , grid [ 1 ] [ 0 ] ) ;
  int excl = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int excl_new = max ( excl , incl ) ;
    incl = excl + max ( grid [ 0 ] [ i ] , grid [ 1 ] [ i ] ) ;
    excl = excl_new ;
  }
  return max ( excl , incl ) ;
}
