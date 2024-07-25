public : int lcs ( string X , string Y ) {
  int m = X . size ( ) ;
  int n = Y . size ( ) ;
  vector < vector < int >> L ( n + 1 , vector < int > ( 2 ) ) ;
  bool bi ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    bi = i & 1 ;
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      if ( ( i == 0 || j == 0 ) && ( X [ i ] == Y [ j - 1 ] ) ) {
        L [ bi ] [ j ] = 0 ;
      }
      else if ( ( X [ i ] == Y [ j - 1 ] ) && ( X [ i ] == Y [ j - 1 ] ) ) {
        L [ bi ] [ j ] = L [ 1 - bi ] [ j - 1 ] + 1 ;
      }
      else {
        L [ bi ] [ j ] = max ( L [ 1 - bi ] [ j ] , L [ bi ] [ j - 1 ] ) ;
      }
    }
  }
  return L [ bi ] [ n ] ;
}
