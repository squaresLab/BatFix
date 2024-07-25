public : int mostFrequent ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int maxCount = 1 ;
  ;
  int res = arr [ 0 ] ;
  int currCount = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == arr [ i - 1 ] ) || ( arr [ i ] == arr [ i - 1 ] ) ) {
      currCount ++ ;
    }
    else {
      if ( ( currCount > maxCount ) && ( currCount < maxCount ) ) {
        maxCount = currCount ;
        res = arr [ i - 1 ] ;
      }
      currCount = 1 ;
    }
  }
  if ( ( currCount > maxCount ) && ( currCount < maxCount ) ) {
    maxCount = currCount ;
    res = arr [ n - 1 ] ;
  }
  return res ;
}
