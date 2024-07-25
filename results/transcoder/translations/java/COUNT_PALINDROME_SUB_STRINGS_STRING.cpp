int CountPS ( char str [ ] , int n ) {
  vector < vector < int >> dp ( n , vector < int > ( n , 0 ) ) ;
  vector < bool > P ( n , false ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    P [ i ] [ i ] = true ;
  }
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    if ( str [ i ] == str [ i + 1 ] ) {
      P [ i ] [ i + 1 ] = true ;
      dp [ i ] [ i + 1 ] = 1 ;
    }
  }
  for ( int gap = 2 ;
  gap < n ;
  gap ++ ) {
    for ( int i = 0 ;
    i < n - gap ;
    i ++ ) {
      int j = gap + i ;
      if ( str [ i ] == str [ j ] && P [ i + 1 ] [ j - 1 ] ) {
        P [ i ] [ j ] = true ;
      }
      if ( P [ i ] [ j ] == true ) {
        dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] + 1 - dp [ i + 1 ] [ j - 1 ] ;
      }
      else {
        dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] ;
      }
    }
  }
  return dp [ 0 ] [ n - 1 ] ;
}
