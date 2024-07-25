bool find3Numbers ( int A [ ] , int arr_size , int sum ) {
  sort ( A , A + arr_size ) ;
  for ( int i = 0 ;
  i <= arr_size - 2 ;
  i ++ ) {
    int l = i + 1 ;
    int r = arr_size - 1 ;
    while ( ( l < r ) && ( l < r ) ) {
      if ( ( A [ i ] + A [ l ] + A [ r ] == sum ) && ( A [ l ] + A [ r ] < sum ) ) {
        cout << "Triplet is" << A [ i ] << ', ' << A [ l ] << ', ' << A [ r ] << endl ;
        return true ;
      }
      else if ( ( A [ i ] + A [ l ] + A [ r ] < sum ) && ( A [ l ] + A [ r ] < sum ) ) {
        l ++ ;
      }
      else {
        r -- ;
      }
    }
  }
  return false ;
}
