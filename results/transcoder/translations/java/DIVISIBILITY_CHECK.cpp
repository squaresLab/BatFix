void divisibilityCheck ( vector < int > arr , int n ) {
  vector < int > s ;
  int max_ele = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    s . push_back ( arr [ i ] ) ;
    max_ele = max ( max_ele , arr [ i ] ) ;
  }
  unordered_set < int > res ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] != 0 ) for ( int j = arr [ i ] * 2 ;
    j <= max_ele ;
    j += arr [ i ] ) {
      if ( s . count ( j ) ) res . insert ( j ) ;
    }
  }
  vector < int > v ( res ) ;
  sort ( v . begin ( ) , v . end ( ) ) ;
  for ( auto temp : v ) {
    cout << temp << " " ;
  }
}
