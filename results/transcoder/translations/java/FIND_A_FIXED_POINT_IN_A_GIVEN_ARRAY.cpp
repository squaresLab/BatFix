int linearSearch ( int arr [ ] , int n ) {
  int i ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == i ) return i ;
  }
  return - 1 ;
}
