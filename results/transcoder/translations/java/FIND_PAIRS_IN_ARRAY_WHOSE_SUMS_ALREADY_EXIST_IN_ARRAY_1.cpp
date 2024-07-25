void findPair ( int arr [ ] , int n ) {
  set < int > s ;
  for ( int i = 0 ;
  i < arr [ 0 ] ;
  i ++ ) s . insert ( arr [ i ] ) ;
  bool found = false ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int sum = arr [ i ] + arr [ j ] ;
      if ( s . count ( sum ) ) {
        found = true ;
        cout << arr [ i ] << " " << arr [ j ] << endl ;
      }
    }
  }
  if ( found == false ) cout << "Not Exist " << endl ;
}
