void maxOverlap ( vector < int > start , vector < int > end , int n ) {
  int maxa = std :: accumulate ( start . begin ( ) , start . end ( ) , 0 ) ;
  int maxb = std :: accumulate ( end . begin ( ) , end . end ( ) , 0 ) ;
  int maxc = std :: accumulate ( maxa , maxb , 0 ) ;
  vector < int > x ( maxc + 2 , 0 ) ;
  vector < int > :: iterator cur = 0 , idx = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    ++ x [ start [ i ] ] ;
    -- x [ end [ i ] + 1 ] ;
  }
  int maxy = INT_MAX ;
  for ( int i = 0 ;
  i <= maxc ;
  i ++ ) {
    cur += x [ i ] ;
    if ( maxy < cur ) {
      maxy = cur ;
      idx = i ;
    }
  }
  cout << "Maximum value is:" << maxy << " at position: " << idx << "" << endl ;
}
