int countSubarrWithEqualZeroAndOne ( int arr [ ] , int n ) {
  map < int , int > um ;
  int curr_sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    curr_sum += ( arr [ i ] == 0 ) ? - 1 : arr [ i ] ;
    um [ curr_sum ] = um [ curr_sum ] == 0 ? 1 : um [ curr_sum ] + 1 ;
  }
  int count = 0 ;
  for ( map < int , int > :: iterator itr = um . begin ( ) ;
  itr != um . end ( ) ;
  itr ++ ) {
    if ( itr -> second > 1 ) {
      count += ( ( itr -> second * ( itr -> second - 1 ) ) / 2 ) ;
    }
  }
  if ( um . count ( 0 ) ) {
    count += um [ 0 ] ;
  }
  return count ;
}
