int countSubSets ( int arr [ ] , int n ) {
  set < int > us ;
  int even_count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] % 2 == 0 ) us . insert ( arr [ i ] ) ;
  }
  for ( set < int > :: iterator it = us . begin ( ) ;
  it != us . end ( ) ;
  it ++ ) {
    even_count ++ ;
  }
  return pow ( 2 , even_count ) - 1 ;
}
