void countFreq ( int a [ ] , int n ) {
  unordered_map < int , int > hm ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    hm [ a [ i ] ] = hm [ a [ i ] ] == 0 ? 1 : hm [ a [ i ] ] + 1 ;
  }
  unordered_map < int , int > :: iterator st ;
  for ( st = hm . begin ( ) ;
  st != hm . end ( ) ;
  st ++ ) {
    st -> first = st -> second ;
  }
  int cumul = 0 ;
  for ( auto x : st ) {
    cumul += x -> second ;
    cout << x -> first << " " << cumul << endl ;
  }
}
