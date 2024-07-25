int getNumStrictMonotone ( int ln ) {
  int DP [ DP_s ] [ DP_s ] ;
  for ( int i = 0 ;
  i < DP_s ;
  i ++ ) {
    DP [ 0 ] [ i ] = i + 1 ;
  }
  for ( int i = 1 ;
  i < ln ;
  i ++ ) {
    for ( int j = 1 ;
    j < DP_s ;
    j ++ ) {
      DP [ i ] [ j ] = DP [ i - 1 ] [ j - 1 ] + DP [ i ] [ j - 1 ] ;
    }
  }
  return DP [ ln - 1 ] [ DP_s - 1 ] ;
}
