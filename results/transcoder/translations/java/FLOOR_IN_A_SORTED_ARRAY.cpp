int floorSearch ( int arr [ ] , int n , int x ) {
  if ( x >= arr [ n - 1 ] ) return n - 1 ;
  if ( x < arr [ 0 ] ) return - 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) if ( arr [ i ] > x ) return ( i - 1 ) ;
  return - 1 ;
}
