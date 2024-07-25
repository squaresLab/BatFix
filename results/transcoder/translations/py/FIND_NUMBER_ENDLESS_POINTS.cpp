int countEndless ( int inputMat [ ] [ ] , int n ) {
  int row [ n ] [ n ] ;
  int col [ n ] [ n ] ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    int isEndless = 1 ;
    for ( int i = n - 1 ;
    i >= 0 ;
    i -- ) {
      if ( ( inputMat [ i ] [ j ] == 0 ) && ( inputMat [ i ] [ j ] == 1 ) ) {
        isEndless = 0 ;
      }
      col [ i ] [ j ] = isEndless ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int isEndless = 1 ;
    for ( int j = n - 1 ;
    j >= 0 ;
    j -- ) {
      if ( ( inputMat [ i ] [ j ] == 0 ) && ( inputMat [ i ] [ j ] == 1 ) ) {
        isEndless = 0 ;
      }
      row [ i ] [ j ] = isEndless ;
    }
  }
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      if ( ( row [ i ] [ j ] && col [ i ] [ j ] ) && ( row [ i ] [ j ] == inputMat [ i ] [ j ] ) ) {
        ans ++ ;
      }
    }
  }
  return ans ;
}
