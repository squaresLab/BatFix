int countSubstr ( string s ) {
  int n = s . length ( ) ;
  int auxArr [ n ] ;
  if ( s [ 0 ] == '1' ) {
    auxArr [ 0 ] = 1 ;
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( s [ i ] == '1' ) {
      auxArr [ i ] = auxArr [ i - 1 ] + 1 ;
    }
    else {
      auxArr [ i ] = auxArr [ i - 1 ] ;
    }
  }
  int count = 0 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) if ( s [ i ] == '1' ) count += auxArr [ i ] ;
  return count ;
}
