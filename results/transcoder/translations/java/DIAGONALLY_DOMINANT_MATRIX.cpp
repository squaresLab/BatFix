bool isDDM ( int m [ ] [ 100 ] , int n ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int sum = 0 ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      sum += abs ( m [ i ] [ j ] ) ;
    }
    sum -= abs ( m [ i ] [ i ] ) ;
    if ( abs ( m [ i ] [ i ] ) < sum ) return false ;
  }
  return true ;
}
