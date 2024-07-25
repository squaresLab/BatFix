int countNegative ( int M [ ] [ ] , int n , int m ) {
  int count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( M [ i ] [ j ] < 0 ) {
        count += 1 ;
      }
      else {
        break ;
      }
    }
  }
  return count ;
}
