void printknapSack ( int W , int wt [ ] , int val [ ] , int n ) {
  int i , w ;
  int K [ n + 1 ] [ W + 1 ] ;
  for ( i = 0 ;
  i <= n ;
  i ++ ) {
    for ( w = 0 ;
    w <= W ;
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
  int res = K [ n ] [ W ] ;
  cout << res << endl ;
  w = W ;
  for ( i = n ;
  i > 0 && res > 0 ;
  i -- ) {
    if ( res == K [ i - 1 ] [ w ] ) continue ;
    else {
      cout << wt [ i - 1 ] << " " ;
      res = res - val [ i - 1 ] ;
      w = w - wt [ i - 1 ] ;
    }
  }
}
