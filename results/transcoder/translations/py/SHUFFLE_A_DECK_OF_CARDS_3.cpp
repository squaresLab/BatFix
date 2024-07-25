void shuffle ( int card [ ] , int n ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int r = i + ( rand ( ) % 55 ) % ( 52 - i ) ;
    int tmp = card [ i ] ;
    card [ i ] = card [ r ] ;
    card [ r ] = tmp ;
  }
}
