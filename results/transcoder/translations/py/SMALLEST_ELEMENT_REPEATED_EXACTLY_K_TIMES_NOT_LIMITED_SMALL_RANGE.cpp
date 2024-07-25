int smallestKFreq ( int arr [ ] , int n , int k ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) mp [ arr [ i ] ] ++ ;
  int res = INT_MAX ;
  int res1 = INT_MAX ;
  for ( map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  it ++ ) if ( it -> second == k ) res = min ( res , it -> first ) ;
  return res == res1 ? - 1 : res ;
}
