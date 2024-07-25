public : string printShortestSuperSeq ( string X , string Y ) {
  int m = X . size ( ) ;
  int n = Y . size ( ) ;
  vector < vector < int >> dp ( m + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( i == 0 ) dp [ i ] [ j ] = j ;
      else if ( j == 0 ) dp [ i ] [ j ] = i ;
      else if ( X [ i - 1 ] == Y [ j - 1 ] ) dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) ;
    }
  }
  int index = dp [ m ] [ n ] ;
  string str = "" ;
  int i = m , j = n ;
  while ( i > 0 && j > 0 ) {
    if ( X [ i - 1 ] == Y [ j - 1 ] ) {
      str += ( X [ i - 1 ] ) ;
      i -- ;
      j -- ;
      index -- ;
    }
    else if ( dp [ i - 1 ] [ j ] > dp [ i ] [ j - 1 ] ) {
      str += ( Y [ j - 1 ] ) ;
      j -- ;
      index -- ;
    }
    else {
      str += ( X [ i - 1 ] ) ;
      i -- ;
      index -- ;
    }
  }
  while ( i > 0 ) {
    str += ( X [ i - 1 ] ) ;
    i -- ;
    index -- ;
  }
  while ( j > 0 ) {
    str += ( Y [ j - 1 ] ) ;
    j -- ;
    index -- ;
  }
  str = reverse ( str . begin ( ) , str . end ( ) ) ;
  return str ;
}
