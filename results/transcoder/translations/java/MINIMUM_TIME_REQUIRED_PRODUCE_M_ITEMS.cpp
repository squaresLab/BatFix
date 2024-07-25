int minTime ( int arr [ ] , int n , int m ) {
  int t = 0 ;
  while ( true ) {
    int items = 0 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      items += ( t / arr [ i ] ) ;
    }
    if ( items >= m ) return t ;
    t ++ ;
  }
}
