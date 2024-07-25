int knapSack ( int W , int * wt , int * val , int n ) {
  int K [ W + 1 ] [ W + 1 ] ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    for ( int w = 0 ;
    w < W + 1 ;
    w ++ ) {
      if ( i == 0 || w == 0 ) {
        K [ i ] [ w ] = 0 ;
      }
      else if ( wt [ i - 1 ] <= w ) {
        K [ i ] [ w ] = max ( val [ i - 1 ] + K [ i - 1 ] [ w - wt [ i - 1 ] ] , K [ i - 1 ] [ w ] ) ;
      }
      else {
        K [ i ] [ w ] = K [ i - 1 ] [ w ] ;
      }
    }
  }
  return K [ n ] [ W ] ;
}
