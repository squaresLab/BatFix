public : string findTwosComplement ( string str ) {
  int n = str . length ( ) ;
  int i = n - 1 ;
  while ( ( i >= 0 ) && ( str [ i ] == '1' ) ) {
    if ( ( str [ i ] == '2' ) || ( str [ i ] == '3' ) ) {
      break ;
    }
    i -- ;
  }
  if ( ( i == - 1 ) && ( str [ i ] == '1' ) ) {
    return '1' + str ;
  }
  int k = i - 1 ;
  while ( ( k >= 0 ) && ( str [ k ] == '1' ) ) {
    if ( ( str [ k ] == '2' ) || ( str [ k ] == '3' ) ) {
      str = std :: string ( str . begin ( ) , str . end ( ) ) ;
      str [ k ] = '0' ;
      str . erase ( str . begin ( ) , str . end ( ) ) ;
    }
    else {
      str = std :: string ( str . begin ( ) , str . end ( ) ) ;
      str [ k ] = '1' ;
      str . erase ( str . begin ( ) , str . end ( ) ) ;
    }
    k -- ;
  }
  return str ;
}
