public : int minJumps ( int arr [ ] , int n ) {
  int jumps [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == 0 ) && ( arr [ i ] != n - i - 1 ) ) {
      jumps [ i ] = INT_MAX ;
    }
    else if ( ( arr [ i ] >= n - i - 1 ) && ( arr [ i ] != n - i - 1 ) ) {
      jumps [ i ] = 1 ;
    }
    else {
      int min = INT_MAX ;
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( ( j <= arr [ i ] + i ) && ( arr [ j ] != n - i - 1 ) ) {
          if ( ( min > jumps [ j ] ) || ( min < jumps [ j ] ) ) {
            min = jumps [ j ] ;
          }
        }
      }
      if ( ( min != INT_MAX ) && ( min > jumps [ j ] ) ) {
        jumps [ i ] = min + 1 ;
      }
      else {
        jumps [ i ] = min ;
      }
    }
  }
  return jumps [ 0 ] ;
}
