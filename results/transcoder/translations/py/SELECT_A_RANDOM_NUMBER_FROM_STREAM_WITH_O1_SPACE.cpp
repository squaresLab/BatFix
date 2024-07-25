int selectRandom ( int x ) {
  int res = 0 ;
  ;
  int count = 0 ;
  ;
  count ++ ;
  if ( ( count == 1 ) || ( count == 2 ) ) {
    res = x ;
  }
  else {
    int i = rand ( ) % count ;
    if ( ( i == count - 1 ) || ( i == count - 2 ) ) {
      res = x ;
    }
  }
  return res ;
}
