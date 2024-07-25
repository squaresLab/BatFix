int binarySearch ( int arr [ ] , int x ) {
  int l = 0 , r = arr . size ( ) - 1 ;
  while ( l <= r ) {
    int m = l + ( r - l ) / 2 ;
    if ( arr [ m ] == x ) return m ;
    if ( arr [ m ] < x ) l = m + 1 ;
    else r = m - 1 ;
  }
  return - 1 ;
}
