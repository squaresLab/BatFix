public : int minElements ( int arr [ ] , int n ) {
  int halfSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) halfSum = halfSum + arr [ i ] ;
  halfSum = ( int ) ( halfSum / 2 ) ;
  sort ( arr , arr + n ) ;
  int res = 0 ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currSum += arr [ i ] ;
    res ++ ;
    if ( currSum > halfSum ) return res ;
  }
  return res ;
}
