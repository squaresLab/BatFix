bool isValidISBN ( const std :: string & isbn ) {
  if ( isbn . size ( ) != 10 ) return false ;
  int _sum = 0 ;
  for ( int i = 0 ;
  i < 9 ;
  ++ i ) {
    if ( 0 <= isdigit ( isbn [ i ] ) && i <= 9 ) _sum += isdigit ( isbn [ i ] ) * ( 10 - i ) ;
    else return false ;
  }
  if ( ( isbn [ 9 ] != 'X' && 0 <= isdigit ( isbn [ 9 ] ) && 9 <= isdigit ( isbn [ 9 ] ) ) || ( isbn [ 9 ] == 'X' && 0 <= isdigit ( isbn [ 9 ] ) && 9 <= isdigit ( isbn [ 9 ] ) ) ) return false ;
  _sum += 10 == isbn [ 9 ] ? 1 : atoi ( isbn [ 9 ] ) ;
  return ( _sum % 11 == 0 ) ;
}
