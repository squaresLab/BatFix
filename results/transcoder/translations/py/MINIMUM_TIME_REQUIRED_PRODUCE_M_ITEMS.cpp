int minTime ( int arr [ ] , int n , int m ) {
  int t = 0 ;
  while ( ( 1 ) ) {
    int items = 0 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      items += ( t / arr [ i ] ) ;
    }
    if ( ( items >= m ) && ( items < n ) ) {
      returnt ++ ;
    }
    t ++ ;
  }
  return 0 ;
}
