int maxSum ( ) {
  int arrSum = 0 ;
  int currVal = 0 ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    arrSum = arrSum + arr [ i ] ;
    currVal = currVal + ( i * arr [ i ] ) ;
  }
  int maxVal = currVal ;
  for ( int j = 1 ;
  j < arr . size ( ) ;
  j ++ ) {
    currVal = currVal + arrSum - arr . size ( ) * arr [ arr . size ( ) - j ] ;
    if ( currVal > maxVal ) {
      maxVal = currVal ;
    }
  }
  return maxVal ;
}
