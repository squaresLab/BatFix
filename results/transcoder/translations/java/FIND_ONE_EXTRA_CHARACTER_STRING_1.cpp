char findExtraCharcter ( const string & strA , const string & strB ) {
  unsigned int res = 0 , i ;
  for ( i = 0 ;
  i < strA . size ( ) ;
  i ++ ) res ^= strA [ i ] ;
  for ( i = 0 ;
  i < strB . size ( ) ;
  i ++ ) res ^= strB [ i ] ;
  return ( ( char ) ( res ) ) ;
}
