void swapUpperToLower ( int arr [ ] [ n ] ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int temp = arr [ i ] [ j ] ;
      arr [ i ] [ j ] = arr [ j ] [ i ] ;
      arr [ j ] [ i ] = temp ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      cout << arr [ i ] [ j ] << " " ;
    }
    cout << endl ;
  }
}
