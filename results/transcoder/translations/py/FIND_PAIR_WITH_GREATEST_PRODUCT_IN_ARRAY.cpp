int findGreatest ( int arr [ ] , int n ) {
  int result = - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k < n ;
      k ++ ) {
        if ( ( arr [ j ] * arr [ k ] == arr [ i ] ) && ( arr [ i ] * arr [ j ] == arr [ k ] ) ) {
          result = max ( result , arr [ i ] ) ;
        }
      }
    }
  }
  return result ;
}
