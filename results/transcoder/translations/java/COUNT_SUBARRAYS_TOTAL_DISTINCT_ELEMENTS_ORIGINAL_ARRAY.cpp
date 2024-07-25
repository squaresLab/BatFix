int countDistictSubarray ( int arr [ ] , int n ) {
  unordered_map < int , int > vis ;
  if ( ! has_key ( arr , n ) ) return 0 ;
  unordered_map < int , int > :: iterator it = find ( arr , n ) ;
  if ( it == find ( arr , n ) ) return 0 ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    vis [ arr [ i ] ] = 1 ;
  }
  int k = vis . size ( ) ;
  vis . clear ( ) ;
  int ans = 0 , right = 0 , window = 0 ;
  for ( int left = 0 ;
  left < n ;
  ++ left ) {
    while ( right < n && window < k ) {
      vis [ arr [ right ] ] = vis [ arr [ right ] ] + 1 ;
      if ( vis [ arr [ right ] ] == 1 ) ++ window ;
      ++ right ;
    }
    if ( window == k ) ans += ( n - right + 1 ) ;
    vis [ arr [ left ] ] = vis [ arr [ left ] ] - 1 ;
    if ( vis [ arr [ left ] ] == 0 ) -- window ;
  }
  return ans ;
}
