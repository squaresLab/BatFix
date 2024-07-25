int maxSum ( int * * mat , int n ) {
  if ( n == 1 ) return mat [ 0 ] [ 0 ] ;
  int * * dp = new int [ n ] [ n ] ;
  int maxSum = INT_MIN ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) dp [ n - 1 ] [ j ] = mat [ n - 1 ] [ j ] ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      int maxi = INT_MIN ;
      if ( ( ( ( j - 1 ) >= 0 ) && ( maxi < dp [ i + 1 ] [ j - 1 ] ) ) || ( ( ( j + 1 ) < n ) && ( maxi < dp [ i + 1 ] [ j + 1 ] ) ) ) {
        maxi = dp [ i + 1 ] [ j + 1 ] ;
      }
      if ( ( ( ( j + 1 ) < n ) && ( maxi < dp [ i + 1 ] [ j + 1 ] ) ) || ( ( ( j + 1 ) < n ) && ( maxi < dp [ i + 1 ] [ j + 1 ] ) ) ) {
        maxi = dp [ i + 1 ] [ j + 1 ] ;
      }
      dp [ i ] [ j ] = mat [ i ] [ j ] + maxi ;
    }
  }
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    if ( ( maxSum < dp [ 0 ] [ j ] ) || ( maxSum < dp [ 0 ] [ j ] ) ) {
      maxSum = dp [ 0 ] [ j ] ;
    }
  }
  delete [ ] dp ;
  return maxSum ;
}
