void recursiveReverse ( vector < string > & str ) {
  stack < string > stack ;
  for ( int i = 0 ;
  i < str . size ( ) ;
  i ++ ) {
    stack . push ( str [ i ] ) ;
  }
  for ( int i = 0 ;
  i < str . size ( ) ;
  i ++ ) {
    str [ i ] = stack . top ( ) ;
  }
}
