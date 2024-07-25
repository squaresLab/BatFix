int minElements ( int arr [ ] , int n ) {
  int halfSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    halfSum = halfSum + arr [ i ] ;
  }
  halfSum = halfSum / 2 ;
  sort ( arr , arr + n ) ;
  int res = 0 , currSum = 0 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    currSum += arr [ i ] ;
    res ++ ;
    if ( currSum > halfSum ) return res ;
  }
  return res ;
}
