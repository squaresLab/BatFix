int findMaxVal ( int arr [ ] , int n , int num , int maxLimit ) {
  int ind ;
  int val ;
  int dp [ maxLimit + 1 ] [ maxLimit + 1 ] ;
  for ( ind = 0 ;
  ind < n ;
  ind ++ ) {
    for ( val = 0 ;
    val < maxLimit + 1 ;
    val ++ ) {
      if ( ( ind == 0 ) || ( ind == n - 1 ) ) {
        if ( ( num - arr [ ind ] == val || num + arr [ ind ] == val ) && ( val >= 0 ) ) dp [ ind ] [ val ] = 1 ;
        else dp [ ind ] [ val ] = 0 ;
      }
      else {
        if ( ( val - arr [ ind ] >= 0 && val + arr [ ind ] <= maxLimit ) || ( val - arr [ ind ] >= 0 ) ) dp [ ind ] [ val ] = 1 ;
        else if ( ( val + arr [ ind ] <= maxLimit ) ) dp [ ind ] [ val ] = dp [ ind - 1 ] [ val + arr [ ind ] ] ;
        else dp [ ind ] [ val ] = 0 ;
      }
    }
  }
  for ( val = maxLimit ;
  val >= 0 ;
  val -- ) {
    if ( ( dp [ n - 1 ] [ val ] == 1 ) && ( val + arr [ ind ] <= maxLimit ) ) return val ;
  }
  return - 1 ;
}
