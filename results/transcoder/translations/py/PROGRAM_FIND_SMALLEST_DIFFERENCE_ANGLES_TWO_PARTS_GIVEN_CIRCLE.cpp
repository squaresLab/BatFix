int findMinimumAngle ( int arr [ ] , int n ) {
  int l = 0 ;
  int _sum = 0 ;
  int ans = 360 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    _sum += arr [ i ] ;
    while ( _sum >= 180 ) {
      ans = min ( ans , 2 * abs ( 180 - _sum ) ) ;
      _sum -= arr [ l ] ;
      l ++ ;
    }
    ans = min ( ans , 2 * abs ( 180 - _sum ) ) ;
  }
  return ans ;
}
