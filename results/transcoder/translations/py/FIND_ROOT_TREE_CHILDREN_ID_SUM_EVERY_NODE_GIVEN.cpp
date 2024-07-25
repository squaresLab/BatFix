int findRoot ( int arr [ ] [ 2 ] , int n ) {
  int root = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) root += ( arr [ i ] [ 0 ] - arr [ i ] [ 1 ] ) ;
  return root ;
}
