void findTriplets ( int arr [ ] , int n ) {
  bool found = false ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    int l = i + 1 ;
    int r = n - 1 ;
    int x = arr [ i ] ;
    while ( l < r ) {
      if ( x + arr [ l ] + arr [ r ] == 0 ) {
        cout << x << " " ;
        cout << arr [ l ] << " " ;
        cout << arr [ r ] << " " ;
        l ++ ;
        r -- ;
        found = true ;
      }
      else if ( x + arr [ l ] + arr [ r ] < 0 ) {
        l ++ ;
      }
      else {
        r -- ;
      }
    }
  }
  if ( found == false ) {
    cout << " No Triplet Found" << endl ;
  }
}
