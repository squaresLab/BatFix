int countkDist ( string str , int k ) {
  int res = 0 ;
  int n = str . size ( ) ;
  int cnt [ 26 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int dist_count = 0 ;
    memset ( cnt , 0 , sizeof cnt ) ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      if ( cnt [ str [ j ] - 'a' ] == 0 ) {
        dist_count ++ ;
      }
      cnt [ str [ j ] - 'a' ] ++ ;
      if ( dist_count == k ) {
        res ++ ;
      }
    }
  }
  return res ;
}
