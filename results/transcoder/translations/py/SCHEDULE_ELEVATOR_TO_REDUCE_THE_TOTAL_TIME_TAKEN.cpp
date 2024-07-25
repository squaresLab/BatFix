double minTime ( int n , int k , vector < double > & a ) {
  sort ( a . begin ( ) , a . end ( ) ) ;
  ;
  double minTime = 0 ;
  ;
  for ( int i = 0 ;
  i < n ;
  i += k ) minTime += ( 2 * a [ i ] ) ;
  ;
}
