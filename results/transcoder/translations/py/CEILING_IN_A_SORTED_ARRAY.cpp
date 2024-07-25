int ceilSearch ( int arr [ ] , int low , int high , int x ) {
  if ( x <= arr [ low ] ) return low ;
  int i ;
  for ( i = low ;
  i < high ;
  i ++ ) {
    if ( arr [ i ] == x ) return i ;
    if ( arr [ i ] < x && arr [ i + 1 ] >= x ) return i + 1 ;
  }
  return - 1 ;
}
