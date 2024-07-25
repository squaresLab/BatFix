int findmin ( Point p [ ] , int n ) {
  int a = 0 , b = 0 , c = 0 , d = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( p [ i ] . x <= 0 ) a ++ ;
    else if ( p [ i ] . x >= 0 ) b ++ ;
    if ( p [ i ] . y >= 0 ) c ++ ;
    else if ( p [ i ] . y <= 0 ) d ++ ;
  }
  return min ( min ( a , b ) , min ( c , d ) ) ;
}
