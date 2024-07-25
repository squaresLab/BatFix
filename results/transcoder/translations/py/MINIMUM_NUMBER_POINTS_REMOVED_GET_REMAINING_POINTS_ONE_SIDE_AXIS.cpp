int findmin ( pair < int , int > p , int n ) {
  int a = 0 , b = 0 , c = 0 , d = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( p . first <= 0 ) && ( p . second <= 0 ) ) a ++ ;
    else if ( ( p . first >= 0 ) && ( p . second >= 0 ) ) b ++ ;
    if ( ( p . first >= 0 ) && ( p . second <= 0 ) ) c ++ ;
    else if ( ( p . first <= 0 ) && ( p . second <= 0 ) ) d ++ ;
  }
  return min ( a , b , c , d ) ;
}
