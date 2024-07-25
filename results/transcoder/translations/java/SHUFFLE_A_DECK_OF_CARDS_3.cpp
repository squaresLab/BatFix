void shuffle ( int card [ ] , int n ) {
  srand ( time ( NULL ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int r = i + rand ( ) % ( 52 - i ) ;
    int temp = card [ r ] ;
    card [ r ] = card [ i ] ;
    card [ i ] = temp ;
  }
}
