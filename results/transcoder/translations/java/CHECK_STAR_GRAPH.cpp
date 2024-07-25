bool checkStar ( int mat [ ] [ size ] ) {
  int vertexD1 = 0 , vertexDn_1 = 0 ;
  if ( size == 1 ) return ( mat [ 0 ] [ 0 ] == 0 ) ;
  if ( size == 2 ) return ( mat [ 0 ] [ 0 ] == 0 && mat [ 0 ] [ 1 ] == 1 && mat [ 1 ] [ 0 ] == 1 && mat [ 1 ] [ 1 ] == 0 ) ;
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    int degreeI = 0 ;
    for ( int j = 0 ;
    j < size ;
    j ++ ) if ( mat [ i ] [ j ] == 1 ) degreeI ++ ;
    if ( degreeI == 1 ) vertexD1 ++ ;
    else if ( degreeI == size - 1 ) vertexDn_1 ++ ;
  }
  return ( vertexD1 == ( size - 1 ) && vertexDn_1 == 1 ) ;
}
