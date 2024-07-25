void findElements ( int arr [ ] , int n ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int count = 0 ;
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( arr [ j ] > arr [ i ] ) {
        count = count + 1 ;
      }
    }
    if ( count >= 2 ) {
      cout << arr [ i ] << " " ;
    }
  }
}
