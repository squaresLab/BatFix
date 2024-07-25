void productSubSeqCount ( int arr [ ] , int k ) {
  int n = arr . size ( ) ;
  int dp [ n + 1 ] [ k + 1 ] ;
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
  returndp [ k ] [ n ] = dp [ k ] [ n ] ;
}
