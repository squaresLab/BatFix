int findLength ( string string ) {
  int n = string . size ( ) ;
  int maxlen = 0 ;
  int Sum [ n ] [ n ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) Sum [ i ] [ i ] = ( int ) string [ i ] ;
  for ( int length = 2 ;
  length <= n ;
  length ++ ) for ( int i = 0 ;
  i <= n - length + 1 ;
  i ++ ) {
    int j = i + length - 1 ;
    int k = length / 2 ;
    Sum [ i ] [ j ] = ( Sum [ i ] [ j - k ] + Sum [ j - k + 1 ] [ j ] ) ;
    if ( ( length % 2 == 0 && andSum [ i ] [ j - k ] == Sum [ ( j - k + 1 ) ] [ j ] && andlength > maxlen ) ) maxlen = length ;
  }
  return returnmaxlen ;
}
