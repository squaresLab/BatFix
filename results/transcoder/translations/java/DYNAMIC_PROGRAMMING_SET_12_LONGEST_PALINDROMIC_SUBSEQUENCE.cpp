int lps ( string seq ) {
  int n = seq . length ( ) ;
  int i , j , cl ;
  int L [ n ] [ n ] ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    L [ i ] [ i ] = 1 ;
  }
  for ( cl = 2 ;
  cl <= n ;
  cl ++ ) {
    for ( i = 0 ;
    i < n - cl + 1 ;
    i ++ ) {
      j = i + cl - 1 ;
      if ( seq [ i ] == seq [ j ] && cl == 2 ) {
        L [ i ] [ j ] = 2 ;
      }
      else if ( seq [ i ] == seq [ j ] ) {
        L [ i ] [ j ] = L [ i + 1 ] [ j - 1 ] + 2 ;
      }
      else {
        L [ i ] [ j ] = max ( L [ i ] [ j - 1 ] , L [ i + 1 ] [ j ] ) ;
      }
    }
  }
  return L [ 0 ] [ n - 1 ] ;
}
