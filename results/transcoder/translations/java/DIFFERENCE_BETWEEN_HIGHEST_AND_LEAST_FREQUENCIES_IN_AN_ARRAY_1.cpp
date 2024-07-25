int findDiff ( int arr [ ] , int n ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( mp . count ( arr [ i ] ) ) mp [ arr [ i ] ] = mp [ arr [ i ] ] + 1 ;
    else mp [ arr [ i ] ] = 1 ;
  }
  int max_count = 0 , min_count = n ;
  for ( map < int , int > :: iterator x = mp . begin ( ) ;
  x != mp . end ( ) ;
  x ++ ) {
    max_count = max ( max_count , x -> second ) ;
    min_count = min ( min_count , x -> second ) ;
  }
  return ( max_count - min_count ) ;
}
