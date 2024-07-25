int getMedian ( int ar1 [ ] , int ar2 [ ] , int n ) {
  int i = 0 ;
  int j = 0 ;
  int m1 = - 1 ;
  int m2 = - 1 ;
  int count = 0 ;
  while ( count < n + 1 ) {
    count ++ ;
    if ( i == n ) {
      m1 = m2 ;
      m2 = ar2 [ 0 ] ;
      break ;
    }
    else if ( j == n ) {
      m1 = m2 ;
      m2 = ar1 [ 0 ] ;
      break ;
    }
    if ( ar1 [ i ] < ar2 [ j ] ) {
      m1 = m2 ;
      m2 = ar1 [ i ] ;
      i ++ ;
    }
    else {
      m1 = m2 ;
      m2 = ar2 [ j ] ;
      j ++ ;
    }
  }
  return ( m1 + m2 ) / 2 ;
}
