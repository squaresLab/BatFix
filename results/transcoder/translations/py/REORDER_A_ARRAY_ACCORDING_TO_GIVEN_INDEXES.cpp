void reorder ( int arr [ ] , int index [ ] , int n ) {
  int temp [ n ] ;
  ;
  for ( int i = 0 ;
  i != n ;
  ++ i ) {
    temp [ index [ i ] ] = arr [ i ] ;
  }
  for ( int i = 0 ;
  i != n ;
  ++ i ) {
    arr [ i ] = temp [ i ] ;
    index [ i ] = i ;
  }
  ;
}
