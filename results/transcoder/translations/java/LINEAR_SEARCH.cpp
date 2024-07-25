public : int search ( int arr [ ] , int x ) {
  int n = sizeof ( arr ) / sizeof ( int ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == x ) return i ;
  }
  return - 1 ;
}
