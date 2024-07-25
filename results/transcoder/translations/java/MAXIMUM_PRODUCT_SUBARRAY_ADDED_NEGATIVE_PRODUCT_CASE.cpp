int findMaxProduct ( int arr [ ] , int n ) {
  int i ;
  int ans = INT_MIN ;
  int maxval = 1 ;
  int minval = 1 ;
  int prevMax ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] > 0 ) {
      maxval = maxval * arr [ i ] ;
      minval = min ( 1 , minval * arr [ i ] ) ;
    }
    else if ( arr [ i ] == 0 ) {
      minval = 1 ;
      maxval = 0 ;
    }
    else if ( arr [ i ] < 0 ) {
      prevMax = maxval ;
      maxval = minval * arr [ i ] ;
      minval = prevMax * arr [ i ] ;
    }
    ans = max ( ans , maxval ) ;
    if ( maxval <= 0 ) maxval = 1 ;
  }
  return ans ;
}
