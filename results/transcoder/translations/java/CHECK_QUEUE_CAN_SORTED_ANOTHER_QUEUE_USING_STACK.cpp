bool checkSorted ( int n ) {
  stack < int > st ;
  int expected = 1 ;
  int fnt ;
  while ( q . size ( ) != 0 ) {
    fnt = q . top ( ) ;
    q . pop ( ) ;
    if ( fnt == expected ) {
      expected ++ ;
    }
    else {
      if ( st . size ( ) == 0 ) st . push ( fnt ) ;
      else if ( st . size ( ) != 0 && st . top ( ) < fnt ) return false ;
      else st . push ( fnt ) ;
    }
    while ( st . size ( ) != 0 && st . top ( ) == expected ) {
      st . pop ( ) ;
      expected ++ ;
    }
  }
  if ( expected - 1 == n && st . size ( ) == 0 ) return true ;
  return false ;
}
