void findSymPairs ( int arr [ ] [ 2 ] ) {
  unordered_map < int , int > hM ;
  for ( int i = 0 ;
  i < arr [ 0 ] . size ( ) ;
  i ++ ) {
    int first = arr [ 0 ] [ i ] ;
    int sec = arr [ 1 ] [ i ] ;
    auto val = hM . find ( sec ) ;
    if ( val != hM . end ( ) && val -> second == first ) {
      cout << "(" << sec << ", " << first << ")" << endl ;
    }
    else {
      hM [ first ] = sec ;
    }
  }
}
