public : int largestKSubmatrix ( int a [ ] [ Col ] ) {
  vector < vector < int >> dp ( Row , vector < int > ( Col , 0 ) ) ;
  int result = 0 ;
  for ( int i = 0 ;
  i < Row ;
  i ++ ) {
    for ( int j = 0 ;
    j < Col ;
    j ++ ) {
      if ( ( i == 0 || j == 0 ) && ( a [ i ] [ j ] == a [ i - 1 ] [ j ] && a [ i ] [ j ] == a [ i ] [ j - 1 ] && a [ i ] [ j ] == a [ i - 1 ] [ j - 1 ] ) ) {
        dp [ i ] [ j ] = min ( min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) , dp [ i - 1 ] [ j - 1 ] ) + 1 ;
      }
      else {
        dp [ i ] [ j ] = 1 ;
      }
    }
    result = max ( result , dp [ i ] [ j ] ) ;
  }
  return result ;
}
