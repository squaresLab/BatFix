int minPalPartion ( string str ) {
  int n = str . length ( ) ;
  vector < vector < int >> C ( n , vector < int > ( n , 0 ) ) ;
  vector < bool > P ( n , false ) ;
  int i , j , k , L ;
  for ( i = 0 ;
  i < n ;
  i ++ ) P [ i ] [ i ] = true ;
  for ( L = 2 ;
  L <= n ;
  L ++ ) {
    for ( i = 0 ;
    i < n - L + 1 ;
    i ++ ) {
      j = i + L - 1 ;
      if ( L == 2 ) P [ i ] [ j ] = ( str [ i ] == str [ j ] ) ;
      else P [ i ] [ j ] = ( str [ i ] == str [ j ] ) && P [ i + 1 ] [ j - 1 ] ;
    }
  }
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    if ( P [ 0 ] [ i ] == true ) C [ i ] = 0 ;
    else {
      C [ i ] = INT_MAX ;
      for ( j = 0 ;
      j < i ;
      j ++ ) {
        if ( P [ j + 1 ] [ i ] == true && 1 + C [ j ] < C [ i ] ) C [ i ] = 1 + C [ j ] ;
      }
    }
  }
  return C [ n - 1 ] ;
}
