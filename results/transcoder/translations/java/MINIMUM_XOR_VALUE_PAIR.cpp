int minXOR ( int arr [ ] , int n ) {
  int min_xor = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) min_xor = min ( min_xor , arr [ i ] ^ arr [ j ] ) ;
  return min_xor ;
}
