bool isPossibleToMakeDivisible ( int arr [ ] , int n ) {
  int remainder = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    remainder = ( remainder + arr [ i ] ) % 3 ;
  }
  return ( remainder == 0 ) ;
}
