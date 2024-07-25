int kthLargestSum ( int arr [ ] , int n , int k ) {
  int sum [ n + 1 ] ;
  sum [ 0 ] = 0 ;
  sum [ 1 ] = arr [ 0 ] ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) sum [ i ] = sum [ i - 1 ] + arr [ i - 1 ] ;
  int Q [ n + 1 ] ;
  heapify ( Q , Q ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) for ( int j = i ;
  j <= n ;
  j ++ ) {
    int x = sum [ j ] - sum [ i - 1 ] ;
    if ( Q [ 0 ] < x ) heapify ( Q , Q + 1 , x ) ;
    else {
      if ( Q [ 0 ] < x ) {
        heapify ( Q , Q + 1 , x ) ;
        heapify ( Q , Q + 1 , x ) ;
      }
    }
  }
  return Q [ 0 ] ;
}
