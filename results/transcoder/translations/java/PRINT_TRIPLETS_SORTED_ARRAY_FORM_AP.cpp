void printAllAPTriplets ( int arr [ ] , int n ) {
  vector < int > s ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int diff = arr [ j ] - arr [ i ] ;
      bool exists = s . find ( arr [ i ] - diff ) != s . end ( ) ;
      if ( exists ) {
        cout << arr [ i ] - diff << " " << arr [ i ] << " " << arr [ j ] << endl ;
      }
    }
    s . push_back ( arr [ i ] ) ;
  }
}
