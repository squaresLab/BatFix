void findPair ( int arr [ ] , int n ) {
  bool found = false ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      for ( int k = 0 ;
      k < n ;
      k ++ ) {
        if ( arr [ i ] + arr [ j ] == arr [ k ] ) {
          cout << arr [ i ] << " " << arr [ j ] << endl ;
          found = true ;
        }
      }
    }
  }
  if ( found == false ) {
    cout << "Not exist" << endl ;
  }
}
