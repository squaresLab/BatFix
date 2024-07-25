int findDiff ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int count = 0 ;
  ;
  int maxCount = 0 ;
  ;
  int minCount = n ;
  for ( int i = 0 ;
  i <= ( n - 1 ) ;
  i ++ ) {
    if ( arr [ i ] == arr [ i + 1 ] ) {
      count ++ ;
      continue ;
    }
    else {
      maxCount = max ( maxCount , count ) ;
      minCount = min ( minCount , count ) ;
      count = 0 ;
    }
  }
  return maxCount - minCount ;
}
