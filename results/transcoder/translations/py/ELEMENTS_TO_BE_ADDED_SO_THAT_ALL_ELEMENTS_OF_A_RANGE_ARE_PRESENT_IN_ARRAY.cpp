int countNum ( int arr [ ] , int n ) {
  int count = 0 ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( arr [ i ] != arr [ i + 1 ] && arr [ i ] != arr [ i + 1 ] - 1 ) || ( arr [ i ] != arr [ i + 1 ] && arr [ i ] != arr [ i + 1 ] - 1 ) ) {
      count += arr [ i + 1 ] - arr [ i ] - 1 ;
      ;
    }
  }
  return count ;
}
