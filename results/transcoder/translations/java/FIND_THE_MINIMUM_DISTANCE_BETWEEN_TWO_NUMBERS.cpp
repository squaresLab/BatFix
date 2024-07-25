int minDist ( int arr [ ] , int n , int x , int y ) {
  int i , j ;
  int min_dist = INT_MAX ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    for ( j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( ( x == arr [ i ] && y == arr [ j ] || y == arr [ i ] && x == arr [ j ] ) && min_dist > abs ( i - j ) ) {
        min_dist = abs ( i - j ) ;
      }
    }
  }
  return min_dist ;
}
