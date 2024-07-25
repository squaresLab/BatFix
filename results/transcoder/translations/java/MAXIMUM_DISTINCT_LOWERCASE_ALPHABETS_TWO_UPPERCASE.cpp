int maxLower ( string str ) {
  int n = str . length ( ) ;
  int i = 0 ;
  for ( ;
  i < n ;
  i ++ ) {
    if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) {
      i ++ ;
      break ;
    }
  }
  int maxCount = 0 ;
  int count [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) {
      int currCount = 0 ;
      for ( int j = 0 ;
      j < MAX_CHAR ;
      j ++ ) {
        if ( count [ j ] > 0 ) currCount ++ ;
      }
      maxCount = max ( maxCount , currCount ) ;
      memset ( count , 0 , MAX_CHAR ) ;
    }
    if ( str [ i ] >= 'a' && str [ i ] <= 'z' ) count [ str [ i ] - 'a' ] ++ ;
  }
  return maxCount ;
}
