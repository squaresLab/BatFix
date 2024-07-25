int findRepeating ( int arr [ ] , int n ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    res = res ^ ( i + 1 ) ^ arr [ i ] ;
  }
  res = res ^ arr [ n - 1 ] ;
  return res ;
}
