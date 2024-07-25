public : int maxSum ( int grid [ ] [ 2 ] , int n ) {
  int incl = max ( grid [ 0 ] [ 0 ] , grid [ 1 ] [ 0 ] ) ;
  int excl = 0 , excl_new ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    excl_new = max ( excl , incl ) ;
    incl = excl + max ( grid [ 0 ] [ i ] , grid [ 1 ] [ i ] ) ;
    excl = excl_new ;
  }
  return max ( excl , incl ) ;
}
