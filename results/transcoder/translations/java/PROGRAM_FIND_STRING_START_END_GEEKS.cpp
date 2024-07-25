bool isCornerPresent ( const string & str , const string & corner ) {
  int n = str . size ( ) ;
  int cl = corner . size ( ) ;
  if ( n < cl ) return false ;
  return ( str . substr ( 0 , cl ) == corner . substr ( 0 , n - cl ) && str . substr ( n - cl , cl ) == corner . substr ( 0 , n ) ) ;
}
