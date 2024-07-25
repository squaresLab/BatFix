void sortInWave ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i < n - 1 ;
  i += 2 ) {
    swap ( arr [ i ] , arr [ i + 1 ] ) ;
  }
}
