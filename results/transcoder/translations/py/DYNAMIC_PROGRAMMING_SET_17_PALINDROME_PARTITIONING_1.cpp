public : int minPalPartion ( string str1 ) {
  int n = str1 . length ( ) ;
  ;
  int C [ n + 1 ] ;
  int P [ n + 1 ] [ n + 1 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) P [ i ] [ i ] = true ;
  for ( int L = 2 ;
  L <= n ;
  L ++ ) for ( int i = 0 ;
  i < n - L + 1 ;
  i ++ ) {
    int j = i + L - 1 ;
    if ( ( L == 2 ) && ( P [ i ] [ j ] == true ) ) P [ i ] [ j ] = ( str1 [ i ] == str1 [ j ] ) ;
    else P [ i ] [ j ] = ( ( str1 [ i ] == str1 [ j ] ) && P [ i + 1 ] [ j - 1 ] == true ) ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( P [ 0 ] [ i ] == true ) && ( C [ i ] == 0 ) ) C [ i ] = 0 ;
    else {
      C [ i ] = INT_MAX ;
      for ( int j = 0 ;
      j < i ;
      j ++ ) if ( ( P [ j + 1 ] [ i ] == true ) && 1 + C [ j ] < C [ i ] ) C [ i ] = 1 + C [ j ] ;
    }
  }
  return C [ n - 1 ] ;
}
