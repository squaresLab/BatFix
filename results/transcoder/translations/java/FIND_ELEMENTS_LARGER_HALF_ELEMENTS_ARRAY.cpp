void findLarger ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  for ( int i = n - 1 ;
  i >= n / 2 ;
  i -- ) {
    cout << arr [ i ] << " " ;
  }
}
