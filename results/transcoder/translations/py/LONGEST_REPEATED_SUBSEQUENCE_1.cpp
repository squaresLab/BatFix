public : string longestRepeatedSubSeq ( string str ) {
  int n = str . size ( ) ;
  vector < vector < int >> dp ( n + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      if ( ( str [ i - 1 ] == str [ j - 1 ] && i != j ) || ( str [ i ] == str [ j - 1 ] && j != i ) ) {
        dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ] ;
      }
      else {
        dp [ i ] [ j ] = max ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] ) ;
      }
    }
  }
  string res ;
  int i = n ;
  int j = n ;
  while ( ( i > 0 && j > 0 ) || ( i < 0 && j < n ) ) {
    if ( ( dp [ i ] [ j ] == dp [ i - 1 ] [ j - 1 ] + 1 ) || ( dp [ i ] [ j ] == dp [ i - 1 ] [ j ] ) ) {
      res += str [ i - 1 ] ;
      i -- ;
      j -- ;
    }
    else if ( ( dp [ i ] [ j ] == dp [ i - 1 ] [ j ] ) || ( dp [ i ] [ j ] == dp [ i - 1 ] [ j ] ) ) {
      i -- ;
    }
    else {
      j -- ;
    }
  }
  res . resize ( std :: distance ( dp . begin ( ) , dp . end ( ) ) ) ;
  return res ;
}
