int difference ( int arr [ ] [ ] , int n ) {
  int d1 = 0 , d2 = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    d1 += arr [ i ] [ i ] ;
    d2 += arr [ i ] [ n - i - 1 ] ;
  }
  return abs ( d1 - d2 ) ;
}
