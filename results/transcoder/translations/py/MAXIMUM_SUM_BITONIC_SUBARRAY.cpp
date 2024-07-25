public : int maxSumBitonicSubArr ( int arr [ ] , int n ) {
  int msis [ n ] ;
  int msds [ n ] ;
  int maxSum = 0 ;
  msis [ 0 ] = arr [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] > arr [ i - 1 ] ) && ( arr [ i ] < arr [ n - 1 ] ) ) {
      msis [ i ] = msis [ i - 1 ] + arr [ i ] ;
    }
    else {
      msis [ i ] = arr [ i ] ;
    }
  }
  msds [ n - 1 ] = arr [ n - 1 ] ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    if ( ( arr [ i ] > arr [ i + 1 ] ) && ( arr [ i ] < arr [ n - 1 ] ) ) {
      msds [ i ] = msds [ i + 1 ] + arr [ i ] ;
    }
    else {
      msds [ i ] = arr [ i ] ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( maxSum < ( msis [ i ] + msds [ i ] - arr [ i ] ) ) && ( maxSum > ( msis [ i ] + msds [ i ] - arr [ i ] ) ) ) {
      maxSum = ( msis [ i ] + msds [ i ] - arr [ i ] ) ;
    }
  }
  return maxSum ;
}
