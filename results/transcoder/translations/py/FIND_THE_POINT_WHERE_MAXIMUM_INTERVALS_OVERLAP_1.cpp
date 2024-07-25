void maxOverlap ( vector < int > start , vector < int > end ) {
  int n = start . size ( ) ;
  int maxa = max ( start . begin ( ) , start . end ( ) ) ;
  int maxb = max ( end . begin ( ) , end . end ( ) ) ;
  int maxc = max ( maxa , maxb ) ;
  int * x = ( int * ) malloc ( maxc + 2 ) ;
  int cur = 0 ;
  ;
  int idx = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    x [ start [ i ] ] ++ ;
    x [ end [ i ] + 1 ] -- ;
  }
  int maxy = - 1 ;
  for ( int i = 0 ;
  i != maxc ;
  i ++ ) {
    cur += x [ i ] ;
    if ( maxy < cur ) {
      maxy = cur ;
      idx = i ;
    }
  }
  cout << "Maximum value is: {0:d}" << maxy << " at position: {0:d}" << idx << endl ;
}
