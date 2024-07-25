int selectRandom ( int x ) {
  count ++ ;
  if ( count == 1 ) {
    res = x ;
  }
  else {
    srand ( time ( NULL ) ) ;
    int i = rand ( ) % count ;
    if ( i == count - 1 ) {
      res = x ;
    }
  }
  return res ;
}
