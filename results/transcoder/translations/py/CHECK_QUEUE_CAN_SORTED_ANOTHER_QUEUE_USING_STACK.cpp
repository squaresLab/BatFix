bool checkSorted ( int n , Queue & q ) {
  std :: vector < int > st ;
  int expected = 1 ;
  int fnt ;
  while ( ( ! q . empty ( ) ) && ( ! q . front ( ) ) ) {
    fnt = q . front ( ) ;
    q . pop ( ) ;
    if ( ( fnt == expected ) || ( fnt < 0 ) ) {
      expected ++ ;
    }
    else {
      if ( ( st . size ( ) == 0 ) && ( st . front ( ) < fnt ) ) {
        return false ;
      }
      else {
        st . push_back ( fnt ) ;
      }
    }
    while ( ( st . size ( ) != 0 ) && ( st . back ( ) == expected ) ) {
      st . pop_back ( ) ;
      expected ++ ;
    }
  }
  if ( ( expected - 1 == n && st . size ( ) == 0 ) && ( st . empty ( ) ) ) {
    return true ;
  }
  return false ;
}
