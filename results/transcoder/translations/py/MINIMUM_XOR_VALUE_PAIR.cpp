int minXOR ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  ;
  int min_xor = 999999 ;
  int val ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n - 1 ;
    j ++ ) {
      val = arr [ i ] ^ arr [ j ] ;
      min_xor = min ( min_xor , val ) ;
    }
  }
  return min_xor ;
}
