int findMinDiff ( int * arr , int n ) {
  int diff = INT_MAX ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) if ( abs ( ( arr [ i ] - arr [ j ] ) ) < diff ) diff = abs ( ( arr [ i ] - arr [ j ] ) ) ;
  return diff ;
}
