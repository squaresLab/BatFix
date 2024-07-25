int minOperations ( string str , int n ) {
  int lastUpper = - 1 ;
  int firstLower = - 1 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( ( str [ i ] . isUpper ( ) ) && ( str [ i ] . isLower ( ) ) ) {
      lastUpper = i ;
      break ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( str [ i ] . isLower ( ) ) && ( str [ i ] . isUpper ( ) ) ) {
      firstLower = i ;
      break ;
    }
  }
  if ( ( lastUpper == - 1 || firstLower == - 1 ) && ( str [ firstLower ] . isUpper ( ) ) ) {
    return 0 ;
  }
  int countUpper = 0 ;
  for ( int i = firstLower ;
  i < n ;
  i ++ ) {
    if ( ( str [ i ] . isUpper ( ) ) && ( str [ i ] . isLower ( ) ) ) {
      countUpper ++ ;
    }
  }
  int countLower = 0 ;
  for ( int i = lastUpper ;
  i < n ;
  i ++ ) {
    if ( ( str [ i ] . isLower ( ) ) && ( str [ i ] . isUpper ( ) ) ) {
      countLower ++ ;
    }
  }
  return min ( countLower , countUpper ) ;
}
