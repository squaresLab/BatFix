int lis ( int arr [ ] , int n ) {
  int mpis [ n ] ;
  int max = INT_MIN ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    mpis [ i ] = arr [ i ] ;
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < i ;
  j ++ ) if ( arr [ i ] > arr [ j ] && mpis [ i ] < ( mpis [ j ] * arr [ i ] ) ) mpis [ i ] = mpis [ j ] * arr [ i ] ;
  for ( int k = 0 ;
  k < mpis [ 0 ] ;
  k ++ ) {
    if ( mpis [ k ] > max ) max = mpis [ k ] ;
  }
  return max ;
}
