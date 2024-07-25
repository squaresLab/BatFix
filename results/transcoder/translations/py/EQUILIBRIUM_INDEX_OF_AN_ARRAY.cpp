int equilibrium ( vector < int > arr ) {
  int leftsum ;
  int rightsum ;
  int n = arr . size ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    leftsum = 0 ;
    rightsum = 0 ;
    for ( int j = 0 ;
    j < i ;
    j ++ ) leftsum += arr [ j ] ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) rightsum += arr [ j ] ;
    if ( leftsum == rightsum ) return i ;
  }
  return - 1 ;
}
