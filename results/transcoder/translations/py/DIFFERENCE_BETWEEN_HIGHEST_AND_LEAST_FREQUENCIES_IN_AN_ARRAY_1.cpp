int findDiff ( int arr [ ] , int n ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) mp [ arr [ i ] ] ++ ;
  int maxCount = 0 ;
  ;
  int minCount = n ;
  for ( map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  it ++ ) {
    maxCount = max ( maxCount , it -> first ) ;
    minCount = min ( minCount , it -> first ) ;
  }
  return maxCount - minCount ;
}
