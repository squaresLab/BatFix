public : int maxLength ( string s , int n ) {
  vector < vector < int >> dp ( n , vector < int > ( n , 0 ) ) ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    if ( ( s [ i ] == '(' && s [ i + 1 ] == ')' ) || ( s [ i ] == '(' && s [ i + 1 ] == ')' ) ) dp [ i ] [ i + 1 ] = 2 ;
  }
  for ( int l = 2 ;
  l < n ;
  l ++ ) {
    int i = - 1 ;
    for ( int j = l ;
    j < n ;
    j ++ ) {
      i ++ ;
      if ( ( s [ i ] == '(' && s [ j ] == ')' ) || ( s [ i ] == '(' && s [ j ] == ')' ) ) dp [ i ] [ j ] = 2 + dp [ i + 1 ] [ j - 1 ] ;
      for ( int k = i ;
      k < j ;
      k ++ ) dp [ i ] [ j ] = max ( dp [ i ] [ j ] , dp [ i ] [ k ] + dp [ k + 1 ] [ j ] ) ;
    }
  }
  return dp [ 0 ] [ n - 1 ] ;
}
