int minTime ( int arr [ ] , int n ) {
  if ( n <= 0 ) return 0 ;
  int incl = arr [ 0 ] ;
  int excl = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int incl_new = arr [ i ] + min ( excl , incl ) ;
    int excl_new = incl ;
    incl = incl_new ;
    excl = excl_new ;
  }
  return min ( incl , excl ) ;
}
