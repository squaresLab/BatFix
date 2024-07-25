int maxDistance ( int arr [ ] , int n ) {
  unordered_map < int , int > map ;
  int max_dist = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! map . count ( arr [ i ] ) ) {
      map [ arr [ i ] ] = i ;
    }
    else {
      max_dist = max ( max_dist , i - map [ arr [ i ] ] ) ;
    }
  }
  return max_dist ;
}
