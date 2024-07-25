int findMinDiff ( int arr [ ] , int n ) {
  int diff = 10 * * 20 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( abs ( arr [ i ] - arr [ j ] ) < diff ) {
        diff = abs ( arr [ i ] - arr [ j ] ) ;
      }
    }
  }
  return diff ;
}
