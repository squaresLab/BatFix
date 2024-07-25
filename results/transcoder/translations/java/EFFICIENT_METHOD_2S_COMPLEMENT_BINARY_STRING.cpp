string findTwoscomplement ( string str ) {
  int n = str . length ( ) ;
  int i ;
  for ( i = n - 1 ;
  i >= 0 ;
  i -- ) if ( str [ i ] == '1' ) break ;
  if ( i == - 1 ) return "1" + str ;
  for ( int k = i - 1 ;
  k >= 0 ;
  k -- ) {
    if ( str [ k ] == '1' ) str . replace ( k , k + 1 , "0" ) ;
    else str . replace ( k , k + 1 , "1" ) ;
  }
  return str ;
}
