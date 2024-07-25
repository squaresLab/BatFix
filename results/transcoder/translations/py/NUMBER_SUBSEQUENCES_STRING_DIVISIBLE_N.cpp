public : int countDivisibleSubseq ( string str , int n ) {
  int l = str . length ( ) ;
  vector < vector < int >> dp ( l , vector < int > ( n ) ) ;
  dp [ 0 ] [ ( ( char ) str [ 0 ] - '0' ) % n ] ++ ;
  for ( int i = 1 ;
  i < l ;
  i ++ ) {
    dp [ i ] [ ( ( char ) str [ i ] - '0' ) % n ] ++ ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      dp [ i ] [ j ] += dp [ i - 1 ] [ j ] ;
      dp [ i ] [ ( j * 10 + ( char ) str [ i ] - '0' ) % n ] += dp [ i - 1 ] [ j ] ;
    }
  }
  return dp [ l - 1 ] [ 0 ] ;
}
