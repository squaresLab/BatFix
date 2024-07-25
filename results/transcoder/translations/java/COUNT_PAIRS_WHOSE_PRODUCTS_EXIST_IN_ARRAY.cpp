int countPairs ( int arr [ ] , int n ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int product = arr [ i ] * arr [ j ] ;
      for ( int k = 0 ;
      k < n ;
      k ++ ) {
        if ( arr [ k ] == product ) {
          result ++ ;
          break ;
        }
      }
    }
  }
  return result ;
}
