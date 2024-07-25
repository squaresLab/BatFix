bool find3Numbers ( int A [ ] , int arr_size , int sum ) {
  for ( int i = 0 ;
  i <= arr_size - 1 ;
  i ++ ) {
    set < int > s ;
    int curr_sum = sum - A [ i ] ;
    for ( int j = i + 1 ;
    j < arr_size ;
    j ++ ) {
      if ( ( curr_sum - A [ j ] ) < s . size ( ) ) {
        cout << "Triplet is" << A [ i ] << ", " << A [ j ] << ", " << curr_sum - A [ j ] << endl ;
        return true ;
      }
      s . insert ( A [ j ] ) ;
    }
  }
  return false ;
}
