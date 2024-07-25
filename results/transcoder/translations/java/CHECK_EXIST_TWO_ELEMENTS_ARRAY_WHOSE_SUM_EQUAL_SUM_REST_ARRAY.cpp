bool checkPair ( int arr [ ] , int n ) {
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum += arr [ i ] ;
  if ( sum % 2 != 0 ) return false ;
  sum = sum / 2 ;
  set < int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int val = sum - arr [ i ] ;
    if ( s . count ( val ) && val == ( int ) s . begin ( ) -> second ) {
      printf ( "Pair elements are %d and %d\n" , arr [ i ] , val ) ;
      return true ;
    }
    s . insert ( arr [ i ] ) ;
  }
  return false ;
}
