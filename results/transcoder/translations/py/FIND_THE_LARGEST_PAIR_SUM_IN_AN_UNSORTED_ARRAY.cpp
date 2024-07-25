public : int findLargestSumPair ( int arr [ ] , int n ) {
  if ( arr [ 0 ] > arr [ 1 ] ) {
    int first = arr [ 0 ] ;
    int second = arr [ 1 ] ;
    if ( first > second ) {
      first = second ;
      second = first ;
    }
    for ( int i = 2 ;
    i < n ;
    i ++ ) {
      if ( arr [ i ] > first ) {
        second = first ;
        first = arr [ i ] ;
      }
      else if ( arr [ i ] > second && arr [ i ] != first ) {
        second = arr [ i ] ;
      }
    }
  }
  return ( first + second ) ;
}
