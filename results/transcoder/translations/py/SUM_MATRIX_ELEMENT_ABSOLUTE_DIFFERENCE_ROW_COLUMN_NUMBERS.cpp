public : int findSum ( int n ) {
  int arr [ n ] [ n ] ;
  for ( int y = 0 ;
  y < n ;
  y ++ ) {
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      arr [ i ] [ j ] = abs ( i - j ) ;
    }
  }
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      sum += arr [ i ] [ j ] ;
    }
  }
  return sum ;
}
