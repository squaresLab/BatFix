int minOperations ( string str , int n ) {
  int i , lastUpper = - 1 , firstLower = - 1 ;
  for ( i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( isUpper ( str [ i ] ) ) {
      lastUpper = i ;
      break ;
    }
  }
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    if ( isLower ( str [ i ] ) ) {
      firstLower = i ;
      break ;
    }
  }
  if ( lastUpper == - 1 || firstLower == - 1 ) return 0 ;
  int countUpper = 0 ;
  for ( i = firstLower ;
  i < n ;
  i ++ ) {
    if ( isUpper ( str [ i ] ) ) countUpper ++ ;
  }
  int countLower = 0 ;
  for ( i = 0 ;
  i < lastUpper ;
  i ++ ) {
    if ( isLower ( str [ i ] ) ) countLower ++ ;
  }
  return min ( countLower , countUpper ) ;
}
