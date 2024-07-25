void printSuperSeq ( string a , string b ) {
  int m = a . size ( ) , n = b . size ( ) ;
  vector < vector < int >> dp ( m + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( i == 0 ) {
        dp [ i ] [ j ] = j ;
      }
      else if ( j == 0 ) {
        dp [ i ] [ j ] = i ;
      }
      else if ( a [ i - 1 ] == b [ j - 1 ] ) {
        dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ] ;
      }
      else {
        dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) ;
      }
    }
  }
  string res ;
  int i = m , j = n ;
  while ( i > 0 && j > 0 ) {
    if ( a [ i - 1 ] == b [ j - 1 ] ) {
      res = a [ i - 1 ] + res ;
      i -- ;
      j -- ;
    }
    else if ( dp [ i - 1 ] [ j ] < dp [ i ] [ j - 1 ] ) {
      res = a [ i - 1 ] + res ;
      i -- ;
    }
    else {
      res = b [ j - 1 ] + res ;
      j -- ;
    }
  }
  while ( i > 0 ) {
    res = a [ i - 1 ] + res ;
    i -- ;
  }
  while ( j > 0 ) {
    res = b [ j - 1 ] + res ;
    j -- ;
  }
  cout << res << endl ;
}
