public : int smallestSumSubarr ( int arr [ ] , int n ) {
  int minEndingHere = INT_MAX ;
  int minSoFar = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( minEndingHere > 0 ) && ( minEndingHere < arr [ i ] ) ) {
      minEndingHere = arr [ i ] ;
    }
    else {
      minEndingHere += arr [ i ] ;
    }
    minSoFar = min ( minSoFar , minEndingHere ) ;
  }
  return minSoFar ;
}
