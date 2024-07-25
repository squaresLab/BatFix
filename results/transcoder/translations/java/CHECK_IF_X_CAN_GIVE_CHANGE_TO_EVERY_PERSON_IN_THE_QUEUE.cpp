int isChangeable ( int notes [ ] , int n ) {
  int fiveCount = 0 ;
  int tenCount = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( notes [ i ] == 5 ) {
      fiveCount ++ ;
    }
    else if ( notes [ i ] == 10 ) {
      if ( fiveCount > 0 ) {
        fiveCount -- ;
        tenCount ++ ;
      }
      else {
        return 0 ;
      }
    }
    else {
      if ( fiveCount > 0 && tenCount > 0 ) {
        fiveCount -- ;
        tenCount -- ;
      }
      else if ( fiveCount >= 3 ) {
        fiveCount -= 3 ;
      }
      else {
        return 0 ;
      }
    }
  }
  return 1 ;
}
