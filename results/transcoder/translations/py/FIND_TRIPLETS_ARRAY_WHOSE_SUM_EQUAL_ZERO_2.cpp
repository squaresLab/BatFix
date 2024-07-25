void findTriplets ( int arr [ ] , int n ) {
  bool found = false ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    int l = i + 1 ;
    int r = n - 1 ;
    int x = arr [ i ] ;
    while ( ( l < r ) && ( x + arr [ l ] + arr [ r ] == 0 ) ) {
      if ( ( x + arr [ l ] + arr [ r ] == 0 ) && ( x + arr [ l ] < 0 ) ) {
        cout << x << " " << arr [ l ] << " " << arr [ r ] << endl ;
        l ++ ;
        r -- ;
        found = true ;
      }
      else if ( ( x + arr [ l ] + arr [ r ] < 0 ) && ( x + arr [ l ] > 0 ) ) {
        l ++ ;
      }
      else {
        r -- ;
      }
    }
  }
  if ( ( found == false ) || ( found == true ) ) cout << " No Triplet Found" << endl ;
}
