void countWaysToJump ( int arr [ ] , int n ) {
  int count_jump [ n ] ;
  memset ( count_jump , 0 , sizeof ( count_jump ) ) ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    if ( arr [ i ] >= n - i - 1 ) {
      count_jump [ i ] ++ ;
    }
    for ( int j = i + 1 ;
    j < n - 1 && j <= arr [ i ] + i ;
    j ++ ) if ( count_jump [ j ] != - 1 ) count_jump [ i ] += count_jump [ j ] ;
    if ( count_jump [ i ] == 0 ) count_jump [ i ] = - 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << count_jump [ i ] << " " ;
  }
}
