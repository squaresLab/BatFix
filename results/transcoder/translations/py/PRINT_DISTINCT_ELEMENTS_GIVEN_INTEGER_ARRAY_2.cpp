void printDistinct ( int arr [ ] , int n ) {
  map < int , int > s ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] != 0 ) && ( arr [ i ] != 1 ) ) {
      s [ arr [ i ] ] = arr [ i ] ;
      ;
      cout << arr [ i ] << " " ;
    }
    ;
  }
  ;
}
