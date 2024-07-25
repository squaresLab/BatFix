int findRoot ( pair arr [ ] , int n ) {
  int root = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) root += ( arr [ i ] . first - arr [ i ] . second ) ;
  return root ;
}
