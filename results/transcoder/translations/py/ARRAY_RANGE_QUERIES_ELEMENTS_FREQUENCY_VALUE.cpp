int solveQuery ( int start , int end , int arr [ ] ) {
  map < int , int > frequency ;
  for ( int i = start ;
  i <= end ;
  i ++ ) {
    if ( arr [ i ] < frequency . size ( ) ) frequency [ arr [ i ] ] ++ ;
    else frequency [ arr [ i ] ] = 1 ;
  }
  int count = 0 ;
  for ( int x : frequency ) {
    if ( x == frequency [ x ] ) count ++ ;
  }
  return count ;
}
