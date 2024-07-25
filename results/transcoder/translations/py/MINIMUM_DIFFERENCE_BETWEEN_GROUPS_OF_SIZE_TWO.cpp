int calculate ( int a [ ] , int n ) {
  sort ( a , a + n ) ;
  ;
  int s [ n ] ;
  int i = 0 ;
  int j = n - 1 ;
  while ( ( i < j ) && ( i < n ) ) {
    s [ i ] = ( a [ i ] + a [ j ] ) ;
    i ++ ;
    j -- ;
  }
  int mini = min ( s ) ;
  int maxi = max ( s ) ;
  return abs ( maxi - mini ) ;
}
