int single_number ( int a [ ] , int n ) {
  set < int > s ;
  for ( int i : a ) s . insert ( i ) ;
  int arr_sum = 0 ;
  for ( int i : a ) arr_sum += i ;
  int set_sum = 0 ;
  for ( set < int > :: iterator i = s . begin ( ) ;
  i != s . end ( ) ;
  ++ i ) set_sum += * i ;
  return ( 3 * set_sum - arr_sum ) / 2 ;
}
