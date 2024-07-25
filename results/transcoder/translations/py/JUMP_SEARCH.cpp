int jumpSearch ( int arr [ ] , int x , int n ) {
  int step = sqrt ( n ) ;
  int prev = 0 ;
  while ( arr [ int ( min ( step , n ) - 1 ) ] < x ) {
    prev = step ;
    step += sqrt ( n ) ;
    if ( prev >= n ) return - 1 ;
  }
  while ( arr [ int ( prev ) ] < x ) {
    prev ++ ;
    if ( prev == min ( step , n ) ) return - 1 ;
  }
  if ( arr [ int ( prev ) ] == x ) return prev ;
  return - 1 ;
}
