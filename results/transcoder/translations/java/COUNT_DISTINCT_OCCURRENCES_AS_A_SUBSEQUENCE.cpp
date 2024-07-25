int findSubsequenceCount ( string S , string T ) {
  int m = T . size ( ) ;
  int n = S . size ( ) ;
  if ( m > n ) return 0 ;
  int mat [ m + 1 ] [ n + 1 ] ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    mat [ i ] [ 0 ] = 0 ;
  }
  for ( int j = 0 ;
  j <= n ;
  j ++ ) {
    mat [ 0 ] [ j ] = 1 ;
  }
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      if ( T [ i - 1 ] != S [ j - 1 ] ) {
        mat [ i ] [ j ] = mat [ i ] [ j - 1 ] ;
      }
      else {
        mat [ i ] [ j ] = mat [ i ] [ j - 1 ] + mat [ i - 1 ] [ j - 1 ] ;
      }
    }
  }
  return mat [ m ] [ n ] ;
}
