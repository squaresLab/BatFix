void countWaysToJump ( int arr [ ] , int n ) {
  int count_jump [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] >= n - i - 1 ) && ( arr [ i ] <= arr [ i + i ] ) ) {
      count_jump [ i ] ++ ;
    }
    int j = i + 1 ;
    while ( ( j < n - 1 ) && ( j <= arr [ i ] + i ) ) {
      if ( ( count_jump [ j ] != - 1 ) && ( count_jump [ i ] == count_jump [ j ] ) ) {
        count_jump [ i ] += count_jump [ j ] ;
      }
      j ++ ;
    }
    if ( ( count_jump [ i ] == 0 ) && ( count_jump [ i ] == 0 ) ) {
      count_jump [ i ] = - 1 ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << count_jump [ i ] << " " ;
  }
}
