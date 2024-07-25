char findExtraCharcter ( const char * strA , const char * strB ) {
  unsigned int res = 0 ;
  for ( ;
  * strA != 0 ;
  strA ++ ) {
    res = res ^ ( unsigned int ) ( * strA ++ ) ;
  }
  for ( ;
  * strB != 0 ;
  strB ++ ) {
    res = res ^ ( unsigned int ) ( * strB ++ ) ;
  }
  return ( ( char ) ( res ) ) ;
  ;
}
