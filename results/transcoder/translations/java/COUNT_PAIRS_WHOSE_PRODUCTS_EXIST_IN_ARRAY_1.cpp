int countPairs ( int arr [ ] , int n ) {
  int result = 0 ;
  std :: set < int > Hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) Hash . insert ( arr [ i ] ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int product = arr [ i ] * arr [ j ] ;
      if ( Hash . count ( product ) ) result ++ ;
    }
  }
  return result ;
}
