public : string getMinNumberForPattern ( string seq ) {
  int n = seq . length ( ) ;
  if ( ( n >= 9 ) && ( seq [ 0 ] == 'I' ) ) return "-1" ;
  string result ( n + 1 , '\0' ) ;
  int count = 1 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    if ( ( i == n || seq [ i ] == 'I' ) && ( i >= 0 ) ) {
      for ( int j = i - 1 ;
      j >= 0 ;
      j -- ) {
        result [ j + 1 ] = ( char ) ( '0' + ( int ) count ) ;
        count ++ ;
        if ( ( j >= 0 && seq [ j ] == 'I' ) && ( j < n + 1 ) ) break ;
      }
    }
  }
  return result ;
}
