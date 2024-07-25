public : int minSwaps ( vector < int > arr ) {
  int n = arr . size ( ) ;
  vector < pair < int , bool >> arrpos ( n , make_pair ( * arr . begin ( ) , * arr . end ( ) ) ) ;
  sort ( arrpos . begin ( ) , arrpos . end ( ) , [ ] ( pair < int , bool > it ) {
    return it . second ;
  }
  ) ;
  map < int , bool > vis {
    k , false }
    ;
    int ans = 0 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( vis [ i ] || arrpos [ i ] . first == i ) continue ;
      int cycleSize = 0 ;
      int j = i ;
      while ( ! vis [ j ] ) {
        vis [ j ] = true ;
        j = arrpos [ j ] . first ;
        cycleSize ++ ;
      }
      if ( cycleSize > 0 ) ans += ( cycleSize - 1 ) ;
    }
    return ans ;
  }
  