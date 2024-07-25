int findCommon ( int mat [ M ] [ N ] ) {
  unordered_map < int , int > cnt ;
  int i , j ;
  for ( i = 0 ;
  i < M ;
  i ++ ) {
    if ( cnt . count ( mat [ i ] [ 0 ] ) ) cnt [ mat [ i ] [ 0 ] ] = cnt [ mat [ i ] [ 0 ] ] + 1 ;
    else cnt [ mat [ i ] [ 0 ] ] = 1 ;
    for ( j = 1 ;
    j < N ;
    j ++ ) {
      if ( mat [ i ] [ j ] != mat [ i ] [ j - 1 ] ) if ( cnt . count ( mat [ i ] [ j ] ) ) cnt [ mat [ i ] [ j ] ] = cnt [ mat [ i ] [ j ] ] + 1 ;
      else cnt [ mat [ i ] [ j ] ] = 1 ;
    }
  }
  for ( auto ele : cnt ) {
    if ( ele . second == M ) return ele . first ;
  }
  return - 1 ;
}
