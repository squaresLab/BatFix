void printDistinct ( int arr [ ] , int n ) {
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    int d = 0 ;
    for ( int j = 0 ;
    j <= i ;
    j ++ ) {
      if ( ( arr [ i ] == arr [ j ] ) && ( arr [ i ] != arr [ j ] ) ) {
        d = 1 ;
        break ;
      }
    }
    if ( ( d == 0 ) || ( d == 1 ) ) {
      cout << arr [ i ] << endl ;
    }
  }
}
