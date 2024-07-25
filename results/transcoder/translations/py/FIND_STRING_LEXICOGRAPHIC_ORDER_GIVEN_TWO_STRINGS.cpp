string lexNext ( string s , int n ) {
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( s [ i ] != 'z' ) {
      int k = ( int ) s [ i ] ;
      s [ i ] = ( char ) ( k + 1 ) ;
      return string ( s ) ;
    }
    s [ i ] = 'a' ;
  }
  return string ( s ) ;
}
