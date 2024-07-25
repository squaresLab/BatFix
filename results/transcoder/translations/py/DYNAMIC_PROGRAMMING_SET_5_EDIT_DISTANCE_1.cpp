int editDistDP ( string str1 , string str2 , int m , int n ) {
  vector < vector < int >> dp ( n + 1 , vector < int > ( m + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      if ( i == 0 ) dp [ i ] [ j ] = j ;
      else if ( j == 0 ) dp [ i ] [ j ] = i ;
      else if ( str1 [ i - 1 ] == str2 [ j - 1 ] ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = 1 + min ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] , dp [ i - 1 ] [ j - 1 ] ) ;
    }
  }
  return dp [ m ] [ n ] ;
}
