void recaman ( int n ) {
  if ( n <= 0 ) return ;
  printf ( "%d, " , 0 ) ;
  set < int > s ;
  s . insert ( 0 ) ;
  int prev = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int curr = prev - i ;
    if ( curr < 0 || s . count ( curr ) ) curr = prev + i ;
    s . insert ( curr ) ;
    printf ( "%d, " , curr ) ;
    prev = curr ;
  }
}
