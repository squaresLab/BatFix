bool isCornerPresent ( string str , string corner ) {
  int n = str . size ( ) ;
  int cl = corner . size ( ) ;
  if ( ( n < cl ) || ( n > cl ) ) return false ;
  return ( ( str . substr ( 0 , cl ) == corner ) && ( str . substr ( n - cl , cl ) == corner ) ) ;
}
