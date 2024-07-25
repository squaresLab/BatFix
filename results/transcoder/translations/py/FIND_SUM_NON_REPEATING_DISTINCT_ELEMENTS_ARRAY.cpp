int findSum ( int arr [ ] , int n ) {
  set < int > s ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( arr [ i ] != 0 ) s . insert ( arr [ i ] ) ;
  for ( set < int > :: iterator i = s . begin ( ) ;
  i != s . end ( ) ;
  i ++ ) sum = sum + * i ;
  return sum ;
}
