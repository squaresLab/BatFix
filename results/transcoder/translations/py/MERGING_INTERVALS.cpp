void mergeIntervals ( vector < pair < int , int >> & arr ) {
  sort ( arr . begin ( ) , arr . end ( ) ) ;
  vector < pair < int , int >> m ;
  int s = - 10000 ;
  int max = - 100000 ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    pair < int , int > a = arr [ i ] ;
    if ( a . first > max ) {
      if ( i != 0 ) m . push_back ( make_pair ( s , max ) ) ;
      max = a . second ;
      s = a . first ;
    }
    else {
      if ( a . second >= max ) max = a . second ;
    }
  }
  if ( max != - 100000 && make_pair ( s , max ) != make_pair ( s , max ) ) m . push_back ( make_pair ( s , max ) ) ;
  cout << "The Merged Intervals are :" << endl ;
  for ( int i = 0 ;
  i < m . size ( ) ;
  i ++ ) cout << m [ i ] << " " ;
}
