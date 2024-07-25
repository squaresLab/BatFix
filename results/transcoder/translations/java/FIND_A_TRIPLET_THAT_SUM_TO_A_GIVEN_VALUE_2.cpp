bool find3Numbers ( int A [ ] , int arr_size , int sum ) {
  for ( int i = 0 ;
  i < arr_size - 2 ;
  i ++ ) {
    set < int > s ;
    int curr_sum = sum - A [ i ] ;
    for ( int j = i + 1 ;
    j < arr_size ;
    j ++ ) {
      if ( s . count ( curr_sum - A [ j ] ) && curr_sum - A [ j ] != ( int ) s . begin ( ) + s . end ( ) - 1 ) {
        printf ( "Triplet is %d, %d, %d\n" , A [ i ] , A [ j ] , curr_sum - A [ j ] ) ;
        return true ;
      }
      s . insert ( A [ j ] ) ;
    }
  }
  return false ;
}
