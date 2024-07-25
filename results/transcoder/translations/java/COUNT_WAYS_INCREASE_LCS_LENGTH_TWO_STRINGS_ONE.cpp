int ways_to_increase_lcs_by_1 ( string str1 , string str2 ) {
  int m = str1 . size ( ) , n = str2 . size ( ) ;
  Vector < int > position [ M ] ;
  for ( int i = 0 ;
  i < M ;
  i ++ ) {
    position [ i ] = Vector < int > ( ) ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    position [ str2 [ i - 1 ] - 'a' ] . push_back ( i ) ;
  }
  vector < vector < int >> lcsl ( m + 2 , vector < int > ( n + 2 , 0 ) ) ;
  vector < vector < int >> lcsr ( m + 2 , vector < int > ( n + 2 , 0 ) ) ;
  for ( int i = 0 ;
  i <= m + 1 ;
  i ++ ) for ( int j = 0 ;
  j <= n + 1 ;
  j ++ ) lcsl [ i ] [ j ] = lcsr [ i ] [ j ] = 0 ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      if ( str1 [ i - 1 ] == str2 [ j - 1 ] ) lcsl [ i ] [ j ] = 1 + lcsl [ i - 1 ] [ j - 1 ] ;
      else lcsl [ i ] [ j ] = max ( lcsl [ i - 1 ] [ j ] , lcsl [ i ] [ j - 1 ] ) ;
    }
  }
  for ( int i = m ;
  i >= 1 ;
  i -- ) {
    for ( int j = n ;
    j >= 1 ;
    j -- ) {
      if ( str1 [ i - 1 ] == str2 [ j - 1 ] ) lcsr [ i ] [ j ] = 1 + lcsr [ i + 1 ] [ j + 1 ] ;
      else lcsr [ i ] [ j ] = max ( lcsr [ i + 1 ] [ j ] , lcsr [ i ] [ j + 1 ] ) ;
    }
  }
  int ways = 0 ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( char d = 0 ;
    d < 26 ;
    d ++ ) {
      for ( int j = 0 ;
      j < position [ d ] . size ( ) ;
      j ++ ) {
        int p = position [ d ] . at ( j ) ;
        if ( lcsl [ p