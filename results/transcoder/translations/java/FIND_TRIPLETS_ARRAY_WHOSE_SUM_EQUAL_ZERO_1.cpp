void findTriplets ( int arr [ ] , int n ) {
  bool found = false ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    set < int > s ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int x = - ( arr [ i ] + arr [ j ] ) ;
      if ( s . count ( x ) ) {
        printf ( "%d %d %d\n" , x , arr [ i ] , arr [ j ] ) ;
        found = true ;
      }
      else {
        s . insert ( arr [ j ] ) ;
      }
    }
  }
  if ( found == false ) {
    printf ( " No Triplet Found\n" ) ;
  }
}
