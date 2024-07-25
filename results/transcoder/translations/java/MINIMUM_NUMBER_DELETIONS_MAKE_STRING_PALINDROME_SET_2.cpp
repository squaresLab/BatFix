public : int getLevenstein ( string input ) {
  string rev_input ( input ) ;
  rev_input . reverse ( ) ;
  int n = input . length ( ) ;
  vector < vector < int >> dp ( n + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i <= n ;
  ++ i ) {
    dp [ 0 ] [ i ] = i ;
    dp [ i ] [ 0 ] = i ;
  }
  for ( int i = 1 ;
  i <= n ;
  ++ i ) {
    for ( int j = 1 ;
    j <= n ;
    ++ j ) {
      if ( input [ i - 1 ] == rev_input [ j - 1 ] ) {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] ;
      }
      else {
        dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) ;
      }
    }
  }
  int res = INT_MAX ;
  for ( int i = n , j = 0 ;
  i >= 0 ;
  i -- , j ++ ) {
    res = min ( res , dp [ i ] [ j ] ) ;
    if ( i < n ) {
      res = min ( res , dp [ i + 1 ] [ j ] ) ;
    }
    if ( i > 0 ) {
      res = min ( res , dp [ i - 1 ] [ j ] ) ;
    }
  }
  return res ;
}
