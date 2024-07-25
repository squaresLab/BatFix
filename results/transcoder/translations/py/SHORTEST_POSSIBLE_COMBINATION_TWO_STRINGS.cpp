void printSuperSeq ( string a , string b ) {
  int m = a . size ( ) ;
  int n = b . size ( ) ;
  vector < vector < int >> dp ( m + 1 , vector < int > ( n + 1 ) ) ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ! i ) dp [ i ] [ j ] = j ;
      ;
      else if ( ! j ) dp [ i ] [ j ] = i ;
      ;
      else if ( ( a [ i - 1 ] == b [ j - 1 ] ) && ( a [ i ] == b [ j - 1 ] ) ) dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ] ;
      ;
      else dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) ;
      ;
    }
  }
  int index = dp [ m ] [ n ] ;
  ;
  string res ( index ) ;
  int i = m ;
  int j = n ;
  ;
  while ( ( i > 0 && j > 0 ) || ( j > 0 && i > 0 ) ) {
    if ( ( a [ i - 1 ] == b [ j - 1 ] ) && ( a [ i ] == b [ j - 1 ] ) ) {
      res [ index - 1 ] = a [ i - 1 ] ;
      i -- ;
      j -- ;
      index -- ;
    }
    else if ( ( dp [ i - 1 ] [ j ] < dp [ i ] [ j - 1 ] ) && ( dp [ i ] [ j ] > dp [ i ] [ j - 1 ] ) ) {
      res [ index - 1 ] = a [ i - 1 ] ;
      i -- ;
      index -- ;
    }
    else {
      res [ index - 1 ] = b [ j - 1 ] ;
      j -- ;
      index -- ;
    }
  }
  while ( ( i > 0 ) && ( i < n ) ) {
    res [ index - 1 ] = a [ i - 1 ] ;
    i -- ;
    index -- ;
  }
  while ( ( j > 0 ) && ( j < n ) ) {
    res [ index - 1 ] = b [ j - 1 ] ;
    j -- ;
    index -- ;
  }
  cout << "" << res << endl ;
}
