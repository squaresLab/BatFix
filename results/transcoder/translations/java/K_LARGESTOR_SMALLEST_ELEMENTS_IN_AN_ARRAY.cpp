void k_largest ( int arr [ ] , int k ) {
  sort ( arr , arr + k , cmp ) ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    cout << arr [ i ] << " " ;
  }
}
