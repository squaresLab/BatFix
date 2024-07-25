int minTime ( int arr [ ] , int n ) {
  if ( ( n <= 0 ) || ( n > n ) ) return 0 ;
  int incl = arr [ 0 ] ;
  int excl = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int incl_new = arr [ i ] + min ( excl , incl ) ;
    excl_new = incl ;
    incl = incl_new ;
    excl = excl_new ;
  }
  return min ( incl , excl ) ;
}
