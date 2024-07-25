void findPair ( int arr [ ] , int n ) {
  map < int , int > s ;
  s [ i ] = 1 ;
  s [ j ] = 1 ;
  bool found = false ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( arr [ i ] + arr [ j ] == s . at ( j ) ) {
        cout << arr [ i ] << arr [ j ] << endl ;
        found = true ;
      }
    }
  }
  if ( found == false ) cout << "Not exist" << endl ;
}
