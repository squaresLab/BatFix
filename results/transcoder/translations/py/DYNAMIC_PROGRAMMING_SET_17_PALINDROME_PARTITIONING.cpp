public : int minPalPartion ( string str ) {
  int n = str . length ( ) ;
  vector < vector < int >> C ( n , vector < int > ( n , 0 ) ) ;
  vector < vector < bool >> P ( n , vector < bool > ( n , false ) ) ;
  int j ;
  int k ;
  int L ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    P [ i ] [ i ] = true ;
    ;
    C [ i ] [ i ] = 0 ;
    ;
  }
  for ( L = 2 ;
  L <= n ;
  L ++ ) {
    for ( int i = 0 ;
    i < n - L + 1 ;
    i ++ ) {
      j = i + L - 1 ;
      if ( L == 2 ) P [ i ] [ j ] = ( str [ i ] == str [ j ] ) ;
      else P [ i ] [ j ] = ( ( str [ i ] == str [ j ] ) && P [ i + 1 ] [ j - 1 ] ) ;
      if ( P [ i ] [ j ] == true ) C [ i ] [ j ] = 0 ;
      else {
        C [ i ] [ j ] = 100000000 ;
        for ( k = i ;
        k < j ;
        k ++ ) C [ i ] [ j ] = min ( C [ i ] [ j ] , C [ i ] [ k ] + C [ k + 1 ] [ j ] + 1 ) ;
      }
    }
  }
  return C [ 0 ] [ n - 1 ] ;
}
