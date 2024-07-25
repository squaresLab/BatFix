public : int productSubSeqCount ( vector < int > & arr , int k ) {
  int n = arr . size ( ) ;
  vector < vector < int >> dp ( k + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 1 ;
  i <= k ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      dp [ i ] [ j ] = dp [ i ] [ j - 1 ] ;
      if ( arr [ j - 1 ] <= i && arr [ j - 1 ] > 0 ) {
        dp [ i ] [ j ] += dp [ i / arr [ j - 1 ] ] [ j - 1 ] + 1 ;
      }
    }
  }
  return dp [ k ] [ n ] ;
}
