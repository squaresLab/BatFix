void findElements ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i < n - 2 ;
  i ++ ) {
    cout << arr [ i ] << " " ;
  }
}
