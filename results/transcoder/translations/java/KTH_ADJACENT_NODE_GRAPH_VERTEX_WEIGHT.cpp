void printkthnode ( Vector < pair < int , int >> & adj , int * wt , int n , int k ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    std :: sort ( adj . begin ( ) , adj . end ( ) , [ ] ( pair < int , int > p1 , pair < int , int > p2 ) {
      return p1 . first < p2 . first ;
    }
    ) ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( adj [ i ] . size ( ) >= k ) {
      std :: cout << adj [ i ] [ adj [ i ] . size ( ) - k ] . second << " " ;
    }
    else {
      std :: cout << "-1" ;
    }
  }
}
