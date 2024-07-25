void printDistinct ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( i < n - 1 && arr [ i ] == arr [ i + 1 ] ) {
      i ++ ;
    }
    cout << arr [ i ] << " " ;
  }
}
