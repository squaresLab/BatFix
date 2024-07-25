int findRepeatFirst ( string s ) {
  int p = - 1 ;
  int hash [ MAX_CHAR ] ;
  int pos [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    int k = ( int ) s [ i ] ;
    if ( ( hash [ k ] == 0 ) && ( hash [ k ] == 1 ) ) {
      hash [ k ] ++ ;
      pos [ k ] = i ;
    }
    else if ( ( hash [ k ] == 1 ) && ( hash [ k ] == 2 ) ) {
      hash [ k ] ++ ;
    }
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( ( hash [ i ] == 2 ) && ( hash [ i ] == 1 ) ) {
      if ( ( p == - 1 ) || ( p > pos [ i ] ) ) {
        p = pos [ i ] ;
      }
      else if ( ( p > pos [ i ] ) || ( p < pos [ i ] ) ) {
        p = pos [ i ] ;
      }
    }
  }
  return p ;
}
