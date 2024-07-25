int countPaths ( int maze [ ] [ R ] [ C ] ) {
  if ( ( maze [ 0 ] [ 0 ] == - 1 ) && ( maze [ 0 ] [ 0 ] == 0 ) ) return 0 ;
  for ( int i = 0 ;
  i < R ;
  i ++ ) {
    if ( ( maze [ i ] [ 0 ] == 0 ) && ( maze [ i ] [ 0 ] == 1 ) ) maze [ i ] [ 0 ] = 1 ;
    else break ;
  }
  for ( int i = 1 ;
  i < C ;
  i += 1 ) {
    if ( ( maze [ 0 ] [ i ] == 0 ) && ( maze [ 0 ] [ i ] == 1 ) ) maze [ 0 ] [ i ] = 1 ;
    else break ;
  }
  for ( int i = 1 ;
  i < R ;
  i += 1 ) {
    for ( int j = 1 ;
    j < C ;
    j += 1 ) {
      if ( ( maze [ i ] [ j ] == - 1 ) && ( maze [ i - 1 ] [ j ] > 0 ) ) continue ;
      if ( ( maze [ i ] [ j - 1 ] > 0 ) && ( maze [ i ] [ j - 1 ] == 1 ) ) maze [ i ] [ j ] = ( maze [ i ] [ j ] + maze [ i ] [ j - 1 ] ) ;
      if ( ( maze [ i ] [ j - 1 ] > 0 ) && ( maze [ i ] [ j - 1 ] == 1 ) ) maze [ i ] [ j ] = ( maze [ i ] [ j ] + maze [ i ] [ j - 1 ] ) ;
    }
  }
  if ( ( maze [ R - 1 ] [ C - 1 ] > 0 ) && ( maze [ R - 1 ] [ C - 1 ] == 1 ) ) return maze [ R - 1 ] [ C - 1 ] ;
  else return 0 ;
}
