string maximum_palin_using_k_changes ( string str , int k ) {
  char palin [ 10 ] ;
  string ans ;
  int l = 0 ;
  int r = str . size ( ) - 1 ;
  while ( l < r ) {
    if ( str [ l ] != str [ r ] ) {
      palin [ l ] = palin [ r ] = ( char ) max ( str [ l ] , str [ r ] ) ;
      k -- ;
    }
    l ++ ;
    r -- ;
  }
  if ( k < 0 ) return "Not possible" ;
  l = 0 ;
  r = str . size ( ) - 1 ;
  while ( l <= r ) {
    if ( l == r ) {
      if ( k > 0 ) palin [ l ] = '9' ;
    }
    if ( palin [ l ] < '9' ) {
      if ( k >= 2 && palin [ l ] == str [ l ] && palin [ r ] == str [ r ] ) {
        k -= 2 ;
        palin [ l ] = palin [ r ] = '9' ;
      }
      else if ( k >= 1 && ( palin [ l ] != str [ l ] || palin [ r ] != str [ r ] ) ) {
        k -- ;
        palin [ l ] = palin [ r ] = '9' ;
      }
    }
    l ++ ;
    r -- ;
  }
  for ( int i = 0 ;
  i < strlen ( palin ) ;
  i ++ ) {
    ans += palin [ i ] ;
  }
  return ans ;
}
