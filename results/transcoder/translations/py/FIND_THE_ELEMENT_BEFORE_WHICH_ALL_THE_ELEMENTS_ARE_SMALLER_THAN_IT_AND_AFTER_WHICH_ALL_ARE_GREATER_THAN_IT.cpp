int findElement ( int arr [ ] , int n ) {
  int leftMax [ n ] = {
    0 }
    ;
    leftMax [ 0 ] = INT_MAX ;
    for ( int i = 1 ;
    i < n ;
    i ++ ) leftMax [ i ] = max ( leftMax [ i - 1 ] , arr [ i - 1 ] ) ;
    int rightMin = INT_MAX ;
    for ( int i = n - 1 ;
    i >= 0 ;
    i -- ) {
      if ( leftMax [ i ] < arr [ i ] && rightMin > arr [ i ] ) return i ;
      rightMin = min ( rightMin , arr [ i ] ) ;
    }
    return - 1 ;
  }
  