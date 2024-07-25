bool areElementsContiguous ( int arr [ ] , int n ) {
  int max = INT_MIN ;
  int min = INT_MIN ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    max = max ( arr [ i ] ) ;
    min = min ( arr [ i ] ) ;
  }
  int m = max - min + 1 ;
  if ( m > n ) return false ;
  bool visited [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    visited [ arr [ i ] - min ] = true ;
  }
  for ( int i = 0 ;
  i < m ;
  i ++ ) if ( visited [ i ] == false ) return false ;
  return true ;
}
