int largestKSubmatrix ( int a [ ] [ Col ] ) {
  int dp [ Row ] [ Col ] ;
  int result = 0 ;
  for ( int i = 0 ;
  i < Row ;
  i ++ ) {
    for ( int j = 0 ;
    j < Col ;
    j ++ ) {
      if ( i == 0 || j == 0 ) {
        dp [ i ] [ j ] = 1 ;
      }
      else {
        if ( a [ i ] [ j ] == a [ i - 1 ] [ j ] && a [ i ] [ j ] == a [ i ] [ j - 1 ] && a [ i ] [ j ] == a [ i - 1 ] [ j - 1 ] ) {
          dp [ i ] [ j ] = ( dp [ i - 1 ] [ j ] > dp [ i ] [ j - 1 ] && dp [ i - 1 ] [ j ] > dp [ i - 1 ] [ j - 1 ] + 1 ) ? dp [ i - 1 ] [ j ] : ( dp [ i ] [ j - 1 ] > dp [ i - 1 ] [ j ] && dp [ i ] [ j - 1 ] > dp [ i - 1 ] [ j - 1 ] + 1 ) ? dp [ i ] [ j - 1 ] : dp [ i - 1 ] [ j - 1 ] + 1 ;
        }
        else {
          dp [ i ] [ j ] = 1 ;
        }
      }
      result = result > dp [ i ] [ j ] ? result : dp [ i ] [ j ] ;
    }
  }
  return result ;
}
